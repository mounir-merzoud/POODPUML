#include "Weapon.hpp"

Weapon::Weapon(std::string name, float positionX, float positionY, int width, int height, float range, float rateOfFire, std::shared_ptr<Projectile> projectile, Animation& animation)
    : GameObject(positionX, positionY, width, height), name(name), range(range), rateOfFire(rateOfFire), projectile(projectile), animation(animation)
{
}