#include "Tower.hpp"
#include <cmath>
#include <limits>

Tower::Tower(std::string name, float positionX, float positionY, int width, int height, std::shared_ptr<Weapon> weapon, int price, Animation& animation)
    : GameObject(positionX, positionY, width, height), name(name), price(price), weapon(weapon), animation(animation)
{
    this->weapon->sprite.setOrigin(this->weapon->width / 2, this->weapon->height / 2);
    this->sprite.setTexture(this->animation.texture);
    this->weapon->positionX = this->positionX + this->width / 2;
    this->weapon->positionY = this->positionY + 30;
}

void Tower::update(float deltatime)
{
    this->animation.update(deltatime);
    this->animation.applyToSprite(this->sprite);
    this->sprite.setPosition(this->positionX, this->positionY);

    this->weapon->sprite.setPosition(this->weapon->positionX, this->weapon->positionY);
    this->weapon->animation.update(deltatime);
    this->weapon->animation.applyToSprite(this->weapon->sprite);
}


std::shared_ptr<Projectile> Tower::shoot(std::vector<std::shared_ptr<Monster>>& monsters, float currentTime)
{
    std::shared_ptr<Monster> closestMonster = nullptr;
    float closestDistance = std::numeric_limits<float>::max();

    for (auto& monster : monsters) {
        float distance = std::sqrt(std::pow(monster->positionX - this->positionX, 2) + std::pow(monster->positionY - this->positionY, 2));
        if (distance < closestDistance && distance <= this->weapon->range && monster->health > 0) {
            closestDistance = distance;
            closestMonster = monster;
        }
    }

    if (closestMonster) {
        float direction = std::atan2(closestMonster->positionY - this->weapon->positionY, closestMonster->positionX - this->weapon->positionX) * 180.0f / 3.14159f;
        weapon->sprite.rotate(direction - weapon->sprite.getRotation() + 90);
        return weapon->shoot(closestMonster->positionX, closestMonster->positionY, direction, currentTime);
    }
    
    weapon->animation.setAnimation("idle");
    return nullptr;
}