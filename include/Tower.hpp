#ifndef Tower_hpp
#define Tower_hpp
#include <string>
#include "GameObject.hpp"
#include "Weapon.hpp"
#include "Monster.hpp"
#include <memory>

class Tower : public GameObject{
    public:
        Tower(std::string name, float positionX, float positionY, int width, int height, std::shared_ptr<Weapon> weapon, int price, Animation& animation);

        void update(float deltatime);
        std::shared_ptr<Projectile> shoot(std::vector<std::shared_ptr<Monster>>& monsters, float currentTime);

        int price;
        std::string name;
        std::shared_ptr<Weapon> weapon;
        Animation animation;
};

#endif