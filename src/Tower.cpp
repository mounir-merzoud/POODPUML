#include "Tower.hpp"

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