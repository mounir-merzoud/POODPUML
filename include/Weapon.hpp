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

        std::shared_ptr<Projectile> shoot(float targetX, float targetY, float direction, float currentTime);

        float range;
        float rateOfFire;
        std::string name;
        std::shared_ptr<Projectile> projectile;
        std::shared_ptr<Projectile> projectilePrototype;
        Animation animation;
        float lastShotTime;
};

#endif