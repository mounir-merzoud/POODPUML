#ifndef Projectile_hpp
#define Projectile_hpp
#include <string>
#include <cmath>
#include "GameObject.hpp"
#include "Animation.hpp"

class Projectile : public GameObject{
    public:
        Projectile(float positionX, float positionY, int width, int height, int damage, float speed, float angle, Animation& animation);

        void update(float deltatime);

        int damage;
        float speed;
        float angle;
        Animation animation;
};

#endif