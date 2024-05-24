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

int main() {
    sf::RenderWindow window(sf::VideoMode(1900, 1000), "SFML window");

    Animation firebugAnimation(animationsFirebug, "walkRight", "assets/sprites/firebug.png");

    std::vector<Monster> monsters;

    auto firebug = GameObjectFactory::createMonster("Firebug", 100, 100, 70, 60, 100, 100.0f, firebugAnimation);
    monsters.push_back(*firebug);

    auto firebug2 = GameObjectFactory::createMonster("Firebug", 1200, 200, 70, 60, 100, 100.0f, firebugAnimation);
    monsters.push_back(*firebug2);


    sf::Sprite spriteFirebug;

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

        if (firebugAnimation.animationName == "walkLeft"){
            spriteFirebug.setScale({ -1, 1 });
        }

        window.clear(sf::Color::White);

        firebug->sprite.setPosition(firebug->positionX, firebug->positionY);
        window.draw(firebug->sprite);

        firebug2->sprite.setPosition(firebug2->positionX, firebug2->positionY);
        window.draw(firebug2->sprite);


        window.display();
    }
    return 0;
}