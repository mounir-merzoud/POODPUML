#ifndef CollisionHandler_hpp
#define CollisionHandler_hpp
#include <SFML/Graphics.hpp>
#include <vector>
#include "Monster.hpp"
#include "Projectile.hpp"
#include <memory>
#include <iostream>

class CollisionHandler {
    public:
        static bool checkCollision(sf::Sprite& sprite1, sf::Sprite& sprite2);
        static void handleCollisions(std::vector<std::shared_ptr<Monster>>& monsters, std::vector<std::shared_ptr<Projectile>>& projectiles);
};

#endif