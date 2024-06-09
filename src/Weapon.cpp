#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string name, float positionX, float positionY, int width, int height, float range, float rateOfFire, std::shared_ptr<Projectile> projectile, Animation& animation)
    : GameObject(positionX, positionY, width, height), name(name), range(range), rateOfFire(rateOfFire), projectile(projectile), animation(animation), lastShotTime(0)
    
{
    this->animation.setAnimation("idle");
    this->animation.setFrameTime(0.20f);
}

std::shared_ptr<Projectile> Weapon::shoot(float targetX, float targetY, float direction, float currentTime)
{
    if (currentTime - lastShotTime >= rateOfFire)
        {
            animation.setAnimation("shoot");

            lastShotTime = currentTime;
            return std::make_shared<Projectile>(positionX + width/2, positionY, projectile->width, projectile->height, projectile->damage, projectile->speed, direction,  projectile->animation);
        }
        return nullptr;
}
