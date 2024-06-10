#include <SFML/Graphics.hpp>
#include "GameObjectFactory.hpp"
#include "CollisionHandler.hpp"
#include "WaveManager.hpp"
#include "GameData.hpp"
#include "Display.hpp"
#include "GameManager.hpp"
#include <iostream>
#include <vector>
#include <string>


int main() {
    sf::RenderWindow window(sf::VideoMode(775, 775), "SFML window", sf::Style::Fullscreen);

    towers.push_back(tower);
    towers.push_back(tower02);

    //load background image
    sf::Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("assets/sprites/bkg.png")) {
        std::cerr << "Failed to load background image" << std::endl;
        return 1;
    }
    sf::Sprite backgroundSprite(backgroundTexture);

    sf::Vector2u textureSize = backgroundTexture.getSize();
    sf::Vector2u windowSize = window.getSize();
    float scaleX = (float)windowSize.x / textureSize.x;
    float scaleY = (float)windowSize.y / textureSize.y;
    backgroundSprite.setScale(scaleX, scaleY);

    sf::Clock deltaTimeClock;
    sf::Clock clock;
    float currentTime;
    
    WaveManager waveManager = WaveManager(currentTime, monsters, waveNumber, killCount);
    Display display = Display(state);
    GameManager gameManager = GameManager(state);

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
                                    if (money >= 200) {
                                        tower->upgrade(weapon01Level02, 200);
                                        money -= 200;
                                    }
                                    break;
                                case 200:
                                    if (money >= 300) {
                                        tower->upgrade(weapon01Level03, 300);
                                        money -= 300;
                                    }
                                    break;
                                default:
                                    break;
                            }
                        }
                        if (tower->sprite.getGlobalBounds().contains(mousePosition.x, mousePosition.y) && tower->name == "Tower02") {
                            switch (tower->price) {
                                case 100:
                                    if (money >= 200) {
                                        tower->upgrade(weapon02Level02, 200);
                                        money -= 200;
                                    }
                                    break;
                                case 200:
                                    if (money >= 300) {
                                        tower->upgrade(weapon02Level03, 300);
                                        money -= 300;
                                    }
                                    break;
                                default:
                                    break;
                            }
                        }
                    }
                }
            }
        }

        
                
        float deltaTime = deltaTimeClock.restart().asSeconds();
        currentTime = clock.getElapsedTime().asSeconds();

        waveManager.HandleSpawn(deltaTime);
        gameManager.update(deltaTime, monsters, projectiles, towers, killCount, money, currentTime);
        CollisionHandler::handleCollisions(monsters, projectiles);
        display.draw(backgroundSprite, monsters, projectiles, towers, money, waveNumber, window, lives);

    }
    return 0;
}