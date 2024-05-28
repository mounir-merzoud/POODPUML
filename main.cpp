#include <SFML/Graphics.hpp>
#include "GameObjectFactory.hpp"
#include "Animation.hpp"
#include <iostream>
#include <vector>
#include <string>

// Define animations using structs
    std::vector<AnimationData> animationsFirebug = {
        { "walkDown", { {30, 196, 65, 54}, {162, 196, 65, 54}, {287, 196, 65, 54}, {418, 196, 65, 54},
        {543, 196, 65, 54}, {674, 196, 65, 54}, {799, 196, 65, 54}, {930, 196, 65, 54} } },
        { "walkUp", { {30, 259, 65, 54}, {162, 259, 65, 54}, {287, 259, 65, 54}, {418, 259, 65, 54},
        {543, 259, 65, 54}, {674, 259, 65, 54}, {799, 259, 65, 54}, {930, 259, 65, 54} } },
        { "walkRight", { {30, 335, 65, 34}, {162, 335, 65, 34}, {287, 335, 65, 34}, {418, 335, 65, 34},
        {543, 335, 65, 34}, {674, 335, 65, 34}, {799, 335, 65, 34}, {930, 335, 65, 34} } },
        { "walkLeft", { {30, 335, 65, 34}, {162, 335, 65, 34}, {287, 335, 65, 34}, {418, 335, 65, 34},
        {543, 335, 65, 34}, {674, 335, 65, 34}, {799, 335, 65, 34}, {930, 335, 65, 34} } }
        };
    
    std::vector<AnimationData> animationsTower01 = {
        { "idle", { {0, 29, 64, 97} } }
    };

    std::vector<AnimationData> animationsWeapon01 = {
        { "idle", { {30, 25, 35, 45} } }
    };

    std::vector<AnimationData> animationsArrow = {
        { "idle", { {0, 0, 7, 40} } }
    };

int main() {
    sf::RenderWindow window(sf::VideoMode(1900, 1000), "SFML window");

    Animation firebugAnimation(animationsFirebug, "walkRight", "assets/sprites/Monsters/firebug.png");
    Animation tower01Animation(animationsTower01, "idle", "assets/sprites/Towers/Tower01.png");
    Animation weapon01Animation(animationsWeapon01, "idle", "assets/sprites/Weapons/Tower01-Level01-Weapon.png");
    Animation arrowAnimation(animationsArrow, "idle", "assets/sprites/Projectiles/Tower 01 - Level 01 - Projectile.png");

    std::vector<std::shared_ptr<Monster>> monsters;

    auto firebug = GameObjectFactory::createMonster("Firebug", 100, 100, 70, 60, 100, 100.0f, firebugAnimation);
    monsters.push_back(firebug);

    auto firebug2 = GameObjectFactory::createMonster("Firebug", 1200, 200, 70, 60, 100, 100.0f, firebugAnimation);
    monsters.push_back(firebug2);

    auto arrow = GameObjectFactory::createProjectile(100, 100, 10, 10, 10, 100.0f, 0.0f, arrowAnimation);

    auto weapon = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 100.0f, 1.0f, arrow, weapon01Animation);

    auto tower = GameObjectFactory::createTower("Tower01", 100, 100, 64, 127, weapon, 100, tower01Animation);



    sf::Clock deltaTimeClock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        float deltaTime = deltaTimeClock.restart().asSeconds();
        firebug->moveRight(deltaTime);
        firebug2->moveLeft(deltaTime);


        window.clear(sf::Color::White);

        for (auto& monster : monsters) {
            monster->update(deltaTime);
        }

        for (auto& monster : monsters) {
        window.draw(monster->sprite);
        }
        tower->update(deltaTime);
        window.draw(tower->sprite);
        window.draw(tower->weapon->sprite);

        window.display();
    }
    return 0;
}