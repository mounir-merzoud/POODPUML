#include "Monster.hpp"

Monster::Monster(std::string name, float positionX, float positionY, int width, int height, int health, float speed, Animation& animation)
    : GameObject(positionX, positionY, width, height), name(name), health(health), speed(speed), animation(animation)
{
    this->sprite.setTexture(this->animation.texture);
}
void Monster::moveUp(float deltatime)
{
    this->positionY -= speed * deltatime;
    this->animation.setAnimation("walkUp");
    this->animation.update(deltatime);
    this->animation.applyToSprite(this->sprite);
}
void Monster::moveDown(float deltatime)
{
    this->positionY += speed * deltatime;
    this->animation.setAnimation("walkDown");
    this->animation.update(deltatime);
    this->animation.applyToSprite(this->sprite);
}
void Monster::moveLeft(float deltatime)
{
    this->positionX -= speed * deltatime;
    this->animation.setAnimation("walkLeft");
    this->animation.update(deltatime);
    this->animation.applyToSprite(this->sprite);
    if (this->name == "Firebug"){
        this->sprite.setScale(-1, 1);
    }
}
void Monster::moveRight(float deltatime)
{
    this->positionX += speed * deltatime;
    this->animation.setAnimation("walkRight");
    this->animation.update(deltatime);
    this->animation.applyToSprite(this->sprite);
}