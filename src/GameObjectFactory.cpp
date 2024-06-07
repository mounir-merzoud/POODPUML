#include "GameObjectFactory.hpp"

std::shared_ptr<Monster> GameObjectFactory::createMonster(
    const std::string& name, float positionX, float positionY, int width, int height
    , int health, float speed, Animation& animation)
{
    return std::make_shared<Monster>(name, positionX, positionY, width, height, health, speed, animation);
}
std::shared_ptr<Tower> GameObjectFactory::createTower(
    const std::string& name, float positionX, float positionY, int width, int height
    , std::shared_ptr<Weapon> weapon, int price, Animation& animation)
{
    return std::make_shared<Tower>(name, positionX, positionY, width, height, weapon, price, animation);
}
std::shared_ptr<Weapon> GameObjectFactory::createWeapon(
    const std::string& name, float positionX, float positionY, int width, int height,
    float range, float rateOfFire, std::shared_ptr<Projectile> projectile, Animation animation)
{
    return std::make_shared<Weapon>(name, positionX, positionY, width, height, range, rateOfFire, projectile, animation);
}
std::shared_ptr<Projectile> GameObjectFactory::createProjectile(
    float positionX, float positionY, int width, int height
    , int damage, float speed, float angle, Animation& animation)
{
    return std::make_shared<Projectile>(positionX, positionY, width, height, damage, speed, angle, animation);
}

std::shared_ptr<Monster> GameObjectFactory::createScorpion(
    float positionX, float positionY, Animation& animation)
{
    return std::make_shared<Monster>("Scorpion", positionX, positionY, 64, 64, 100, 50, animation);
}

std::shared_ptr<Monster> GameObjectFactory::createFirebug(
    float positionX, float positionY, Animation& animation)
{
    return std::make_shared<Monster>("Firebug", positionX, positionY, 64, 64, 50, 100, animation);
}