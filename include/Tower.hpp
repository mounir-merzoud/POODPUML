#ifndef Tower_hpp
#define Tower_hpp
#include <string>
#include "GameObject.hpp"

class Tower : public GameObject{
    public:
        Tower(std::string name, float positionX, float positionY, int width, int height, int damage, float range, float rateOfFire, int price);

        int damage;
        float range;
        float rateOfFire;
        int price;
        std::string name;
};

#endif