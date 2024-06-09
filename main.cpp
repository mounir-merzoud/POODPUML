// #include <SFML/Graphics.hpp>
// #include "GameObjectFactory.hpp"
// #include "CollisionHandler.hpp"
// #include "WaveManager.hpp"
// #include "GameData.hpp"
// #include <iostream>
// #include <vector>
// #include <string>


// int main() {
//     sf::RenderWindow window(sf::VideoMode(1900, 1000), "SFML window");

//     auto arrow = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowAnimation);

//     auto weapon = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrow, weapon01Animation);

//     auto tower = GameObjectFactory::createTower("Tower01", 200, 400, 64, 127, weapon, 100, tower01Animation);



//     sf::Clock deltaTimeClock;
//     sf::Clock clock;

//     while (window.isOpen()) {
//         sf::Event event;
//         while (window.pollEvent(event)) {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }

//         float deltaTime = deltaTimeClock.restart().asSeconds();       
//         float currentTime = clock.getElapsedTime().asSeconds();

//         window.clear(sf::Color::White);

//         WaveManager::HandleSpawn(currentTime, monsters, 1, killCount, deltaTime);

//         for (auto it = monsters.begin(); it != monsters.end();) {
//             auto& monster = *it;

//             if (monster->isDead && monster->animation.animationName != "die") {
//                 monster->animation.setAnimation("die", true);
//                 monster->animation.setFrameTime(0.1f);
//             }

//             monster->update(deltaTime);

//             if (monster->isDead && monster->animation.isFinished()) {
//                 it = monsters.erase(it);
//                 killCount++;
//             } else {
//                 window.draw(monster->sprite);
//                 ++it;
//             }

//             if (!monster->isDead) {
//                 monster->moveDown(deltaTime);
//             }
//         }

//         tower->update(deltaTime);
//         window.draw(tower->sprite);
//         window.draw(tower->weapon->sprite);
            
//         auto projectile = tower->shoot(monsters, currentTime);

//         if (projectile != nullptr) {
//             projectiles.push_back(projectile);
//         }

//         for (auto& projectile : projectiles) {
//             projectile->update(deltaTime);
//             window.draw(projectile->sprite);
//         }

//         CollisionHandler::handleCollisions(monsters, projectiles);

//         window.display();
//     }
//     return 0;
// }