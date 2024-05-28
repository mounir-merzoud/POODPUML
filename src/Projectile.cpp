#include "Projectile.hpp"

Projectile::Projectile(float positionX, float positionY, int width, int height, int damage, float speed, float angle, Animation& animation)
    : GameObject(positionX, positionY, width, height), damage(damage), speed(speed), angle(angle), animation(animation)
{
}