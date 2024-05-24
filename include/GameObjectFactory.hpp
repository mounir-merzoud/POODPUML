#ifndef GameObjectFactory_hpp
#define GameObjectFactory_hpp
#include <string>
#include <memory>
#include "GameObject.hpp"
#include "Monster.hpp"
#include "Tower.hpp"

class GameObjectFactory {
    public:
    
        static std::shared_ptr<Monster> createMonster(
            const std::string& name, float positionX, float positionY, int width, int height,
            int health, float speed, Animation& animation);

        static std::shared_ptr<Tower> createTower(
            const std::string& name, float positionX, float positionY, int width, int height,
            int damage, float range, float rateOfFire, int price);
};

#endif