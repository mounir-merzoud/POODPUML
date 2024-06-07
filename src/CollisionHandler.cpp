#include "CollisionHandler.hpp"

bool CollisionHandler::checkCollision(sf::Sprite& sprite1, sf::Sprite& sprite2)
{
    return sprite1.getGlobalBounds().intersects(sprite2.getGlobalBounds());
}

void CollisionHandler::handleCollisions(std::vector<std::shared_ptr<Monster>>& monsters, std::vector<std::shared_ptr<Projectile>>& projectiles)
{
    for (auto monster : monsters) {
        for (auto it = projectiles.begin(); it != projectiles.end();) {
            if (checkCollision(monster->sprite, (*it)->sprite) && monster->health > 0) {
                monster->health -= (*it)->damage;
                std::cout << "Monster health: " << monster->health << std::endl;
                it = projectiles.erase(it);
            } else {
                ++it;
            }
        }
    }
}
