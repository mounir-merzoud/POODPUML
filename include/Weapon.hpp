#ifndef Weapon_hpp
#define Weapon_hpp
#include <string>
#include "GameObject.hpp"
#include "Projectile.hpp"
#include "Animation.hpp"
#include <memory>

class Weapon : public GameObject{
    public:
        Weapon(std::string name, float positionX, float positionY, int width, int height, float range, float rateOfFire, std::shared_ptr<Projectile> projectile, Animation& animation);

        float range;
        float rateOfFire;
        std::string name;
        std::shared_ptr<Projectile> projectile;
        Animation animation;
};

#endif