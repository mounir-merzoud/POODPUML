#include <SFML/Graphics.hpp>
#include "GameObjectFactory.hpp"
#include "CollisionHandler.hpp"
#include "WaveManager.hpp"
#include "GameData.hpp"
#include <iostream>
#include <vector>
#include <string>


int main() {
    sf::RenderWindow window(sf::VideoMode(1900, 1000), "SFML window");

    auto arrowLevel01 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel01Animation);
    auto arrowLevel02 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel02Animation);
    auto arrowLevel03 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel03Animation);

    auto weaponLevel01 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel01, weapon01Level01Animation);
    auto weaponLevel02 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel02, weapon01Level02Animation);
    auto weaponLevel03 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel03, weapon01Level03Animation);

    auto tower = GameObjectFactory::createTower("Tower01", 200, 400, 64, 127, weaponLevel01, 100, tower01Animation);
    auto tower02 = GameObjectFactory::createTower("Tower02", 300, 400, 64, 127, weaponLevel02, 100, tower01Animation);
    auto tower03 = GameObjectFactory::createTower("Tower03", 400, 400, 64, 127, weaponLevel03, 100, tower01Animation);

    tower02->animation.setAnimation("level02", false);
    tower03->animation.setAnimation("level03", false);

    towers.push_back(tower);
    towers.push_back(tower02);
    towers.push_back(tower03);

    

    sf::Clock deltaTimeClock;
    sf::Clock clock;
    float currentTime;          
    
    WaveManager waveManager = WaveManager(currentTime, monsters, 1, killCount);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
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
                monster->moveLeft(deltaTime);
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