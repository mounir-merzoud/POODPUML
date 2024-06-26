#ifndef Monster_hpp
#define Monster_hpp
#include <string>
#include "GameObject.hpp"
#include "Animation.hpp"
#include <iostream>

class Monster : public GameObject{
    public:
        Monster(std::string name, float positionX, float positionY, int width, int height, int health, float speed, Animation& animation);
        void moveUp(float deltatime);
        void moveDown(float deltatime);
        void moveLeft(float deltatime);
        void moveRight(float deltatime);
        void update(float deltatime);
        void die(float deltatime);

        int health;
        float speed;
        std::string name;
        Animation animation;
        bool isDead;
        int maxHealth;
};

#endif