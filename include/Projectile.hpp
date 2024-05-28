#ifndef Projectile_hpp
#define Projectile_hpp
#include <string>
#include "GameObject.hpp"
#include "Animation.hpp"

class Projectile : public GameObject{
    public:
        Projectile(float positionX, float positionY, int width, int height, int damage, float speed, float angle, Animation& animation);

        int damage;
        float speed;
        float angle;
        Animation animation;
};

#endif