#ifndef GameObjectFactory_hpp
#define GameObjectFactory_hpp
#include <string>
#include <memory>
#include "GameObject.hpp"
#include "Monster.hpp"
#include "Tower.hpp"
#include "Weapon.hpp"
#include "Projectile.hpp"
#include "Animation.hpp"

class GameObjectFactory {
    public:
    
        static std::shared_ptr<Monster> createMonster(
            const std::string& name, float positionX, float positionY, int width, int height,
            int health, float speed, Animation& animation);

        static std::shared_ptr<Tower> createTower(
            const std::string& name, float positionX, float positionY, int width, int height,
            std::shared_ptr<Weapon> weapon, int price, Animation& animation);

        static std::shared_ptr<Weapon> createWeapon(
            const std::string& name, float positionX, float positionY, int width, int height,
            float range, float rateOfFire, std::shared_ptr<Projectile> projectile, Animation animation);

        static std::shared_ptr<Projectile> createProjectile(
            float positionX, float positionY, int width, int height,
            int damage, float speed, float angle, Animation& animation);
        
        static std::shared_ptr<Monster> createScorpion(
            float positionX, float positionY, Animation& animation);

        static std::shared_ptr<Monster> createFirebug(
            float positionX, float positionY, Animation& animation);
};

#endif