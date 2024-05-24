#include "Tower.hpp"

Tower::Tower(std::string name, float positionX, float positionY, int width, int height, int damage, float range, float rateOfFire, int price)
    : GameObject(positionX, positionY, width, height), name(name), damage(damage), range(range), rateOfFire(rateOfFire), price(price)
{
}