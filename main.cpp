#include <SFML/Graphics.hpp>
#include "GameObjectFactory.hpp"
#include "CollisionHandler.hpp"
#include "WaveManager.hpp"
#include "GameData.hpp"
#include <iostream>
#include <vector>
#include <string>


int main() {
    sf::RenderWindow window(sf::VideoMode(1600, 1500), "SFML window", sf::Style::Fullscreen);

    //tower02->animation.setAnimation("level02", false);
    //tower03->animation.setAnimation("level03", false);

    //towers.push_back(tower);
    towers.push_back(tower02);
    //towers.push_back(tower03);

    

    sf::Clock deltaTimeClock;
    sf::Clock clock;
    float currentTime;
    
    WaveManager waveManager = WaveManager(currentTime, monsters, 1, killCount);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                    for (auto& tower : towers) {
                        if (tower->sprite.getGlobalBounds().contains(mousePosition.x, mousePosition.y) && tower->name == "Tower01") {
                            switch (tower->price) {
                                case 100:
                                    tower->upgrade(weapon01Level02, 200);
                                    break;
                                case 200:
                                    tower->upgrade(weapon01Level03, 300);
                                    break;
                                default:
                                    break;
                            }
                        }
                        if (tower->sprite.getGlobalBounds().contains(mousePosition.x, mousePosition.y) && tower->name == "Tower02") {
                            switch (tower->price) {
                                case 100:
                                    tower->upgrade(weapon02Level02, 200);
                                    break;
                                case 200:
                                    tower->upgrade(weapon02Level03, 300);
                                    break;
                                default:
                                    break;
                            }
                        }
                    }
                }
            }
        }

        window.clear(sf::Color::White);
                
        float deltaTime = deltaTimeClock.restart().asSeconds();
        currentTime = clock.getElapsedTime().asSeconds();

        waveManager.HandleSpawn(deltaTime);

        for (auto it = monsters.begin(); it != monsters.end();) {
            auto& monster = *it;

            // Draw Hitbox

            sf::RectangleShape hitbox;
            hitbox.setSize(sf::Vector2f(monster->width, monster->height));
            hitbox.setPosition(monster->positionX, monster->positionY);
            hitbox.setFillColor(sf::Color::Transparent);
            hitbox.setOutlineColor(sf::Color::Red);
            hitbox.setOutlineThickness(1.0f);
            window.draw(hitbox);

            if (monster->isDead && monster->animation.animationName != "die") {
                monster->animation.setAnimation("die", true);
                monster->animation.setFrameTime(0.1f);
            }

            monster->update(deltaTime);

            if (monster->isDead && monster->animation.isFinished()) {
                it = monsters.erase(it);
                killCount++;
            } else {
                window.draw(monster->sprite);
                ++it;
            }

            if (!monster->isDead) {
                monster->moveDown(deltaTime);
            }
        }

        for (auto& tower : towers) {
            tower->update(deltaTime);
            window.draw(tower->sprite);
            window.draw(tower->weapon->sprite);            
            
            auto projectile = tower->shoot(monsters, currentTime);

        if (projectile != nullptr) {
            projectiles.push_back(projectile);
        }

        for (auto& projectile : projectiles) {
            projectile->update(deltaTime);
            window.draw(projectile->sprite);
        }
        }

        CollisionHandler::handleCollisions(monsters, projectiles);

        window.display();
    }
    return 0;
}