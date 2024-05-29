#include "Projectile.hpp"
#include <iostream>

Projectile::Projectile(float positionX, float positionY, int width, int height, int damage, float speed, float angle, Animation& animation)
    : GameObject(positionX, positionY, width, height), damage(damage), speed(speed), angle(angle), animation(animation)
{
    sprite.setRotation(90);
    sprite.rotate(angle);
}
void Projectile::update(float deltaTime) 
{
    float radians = angle * (3.14159f / 180.0f);
    positionX += speed * deltaTime * std::cos(radians);
    positionY += speed * deltaTime * std::sin(radians);

    animation.update(deltaTime);
    animation.applyToSprite(sprite);
    sprite.setPosition(positionX, positionY);
}