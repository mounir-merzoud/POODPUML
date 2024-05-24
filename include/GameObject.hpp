#ifndef GameObject_hpp
#define GameObject_hpp
#include <SFML/Graphics.hpp>


class GameObject {
    public:
        GameObject(float positionX, float positionY, int width, int height);

        float positionX;
        float positionY;
        int width;
        int height;
};

#endif