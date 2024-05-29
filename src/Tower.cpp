#include "Tower.hpp"
#include <cmath>
#include <limits>

Tower::Tower(std::string name, float positionX, float positionY, int width, int height, std::shared_ptr<Weapon> weapon, int price, Animation& animation)
    : GameObject(positionX, positionY, width, height), name(name), price(price), weapon(weapon), animation(animation)
{
    this->sprite.setTexture(this->animation.texture);
    this->weapon->positionX = positionX + width / 4;
    this->weapon->positionY = positionY;
}

void Tower::update(float deltatime)
{
    this->animation.update(deltatime);
    this->animation.applyToSprite(this->sprite);
    this->sprite.setPosition(this->positionX, this->positionY);

    this->weapon->animation.update(deltatime);
    this->weapon->animation.applyToSprite(this->weapon->sprite);
    this->weapon->sprite.setPosition(this->weapon->positionX, this->weapon->positionY);
}

std::shared_ptr<Projectile> Tower::shoot(std::vector<std::shared_ptr<Monster>>& monsters, float currentTime)
{
    std::shared_ptr<Monster> closestMonster = nullptr;
    float closestDistance = std::numeric_limits<float>::max();

    for (auto& monster : monsters) {
        float distance = std::sqrt(std::pow(monster->positionX - this->positionX, 2) + std::pow(monster->positionY - this->positionY, 2));
        if (distance < closestDistance && distance <= this->weapon->range) {
            closestDistance = distance;
            closestMonster = monster;
        }
    }

    if (closestMonster) {
        float direction = std::atan2(closestMonster->positionY - this->weapon->positionY, closestMonster->positionX - this->weapon->positionX) * 180.0f / 3.14159f;
        return weapon->shoot(closestMonster->positionX, closestMonster->positionY, direction, currentTime);
    }

    return nullptr;
}