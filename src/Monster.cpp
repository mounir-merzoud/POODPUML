#include "Monster.hpp"

Monster::Monster(std::string name, float positionX, float positionY, int width, int height, int health, float speed, Animation& animation)
    : GameObject(positionX, positionY, width, height), name(name), health(health), speed(speed), animation(animation), isDead(false)
{
    this->sprite.setTexture(this->animation.texture);
    this->width = this->animation.frames[0].width;
    this->height = this->animation.frames[0].height;
}

void Monster::moveUp(float deltatime)
{
    this->positionY -= speed * deltatime;
    this->animation.setAnimation("walkUp");
    this->width = this->animation.frames[0].width;
    this->height = this->animation.frames[0].height;
}

void Monster::moveDown(float deltatime)
{
    this->positionY += speed * deltatime;
    this->animation.setAnimation("walkDown");
    this->width = this->animation.frames[0].width;
    this->height = this->animation.frames[0].height;
}

void Monster::moveLeft(float deltatime)
{
    this->positionX -= speed * deltatime;
    this->animation.setAnimation("walkLeft");
    if (this->name == "Firebug"){
        this->sprite.setScale(-1, 1);
        this->sprite.setOrigin(this->sprite.getLocalBounds().width, 0);
    }
    this->width = this->animation.frames[0].width;
    this->height = this->animation.frames[0].height;
}

void Monster::moveRight(float deltatime)
{
    this->positionX += speed * deltatime;
    this->animation.setAnimation("walkRight");
    if (this->name == "Scorpion"){
        this->sprite.setScale(-1, 1);
        this->sprite.setOrigin(this->sprite.getLocalBounds().width, 0);
    }
    this->width = this->animation.frames[0].width;
    this->height = this->animation.frames[0].height;
}

void Monster::die(float deltatime)
{
    this->animation.setAnimation("die");
    this->animation.playOnce = true;
    this->animation.setFrameTime(0.15f);
    this->width = this->animation.frames[0].width;
    this->height = this->animation.frames[0].height;
}

void Monster::update(float deltatime)
{
    this->animation.update(deltatime);
    this->animation.applyToSprite(this->sprite);
    this->sprite.setPosition(this->positionX, this->positionY);

    if (this->health <= 0){
        isDead = true;
        this->die(deltatime);
    }

    this->width = this->animation.frames[this->animation.currentFrame].width;
    this->height = this->animation.frames[this->animation.currentFrame].height;
}