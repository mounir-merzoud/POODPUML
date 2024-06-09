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

    if (this->weapon->name == "Crossbow"){
    this->weapon->animation.setFrameTime(weapon->rateOfFire / 6);
    }
    else {
        this->weapon->animation.setFrameTime(weapon->rateOfFire / 15);
    }

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
        if (weapon->name == "Crossbow") {
            weapon->sprite.rotate(direction - weapon->sprite.getRotation() + 90);
        }
        return weapon->shoot(closestMonster->positionX, closestMonster->positionY, direction, currentTime);
    }
    
    weapon->animation.setAnimation("idle");
    return nullptr;
}

void Tower::upgrade(std::shared_ptr<Weapon> weapon, int price)
{
    this->weapon = weapon;
    this->price = price;
    switch (price) {
        case 100:
            this->animation.setAnimation("level01");
            break;
        case 200:
            this->animation.setAnimation("level02");
            break;
        case 300:
            this->animation.setAnimation("level03");
            break;
        default:
            break;
    }
    this->width = this->animation.frames[0].width;
    this->height = this->animation.frames[0].height;
    this->weapon->width = this->weapon->animation.frames[0].width;
    this->weapon->height = this->weapon->animation.frames[0].height;
    
    this->weapon->sprite.setOrigin(this->weapon->width / 2, this->weapon->height / 2);
    this->weapon->positionX = this->positionX + this->width / 2;
    this->weapon->positionY = this->positionY + 30;
}