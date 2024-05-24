#include "GameObjectFactory.hpp"

std::shared_ptr<Monster> GameObjectFactory::createMonster(
    const std::string& name, float positionX, float positionY, int width, int height
    , int health, float speed, Animation& animation)
{
    return std::make_shared<Monster>(name, positionX, positionY, width, height, health, speed, animation);
}
std::shared_ptr<Tower> GameObjectFactory::createTower(
    const std::string& name, float positionX, float positionY, int width, int height
    , int damage, float range, float rateOfFire, int price)
{
    return std::make_shared<Tower>(name, positionX, positionY, width, height, damage, range, rateOfFire, price);
}