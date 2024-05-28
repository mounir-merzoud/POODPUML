#include "GameObject.hpp"

GameObject::GameObject(float positionX, float positionY, int width, int height)
{
    this->positionX = positionX;
    this->positionY = positionY;
    this->width = width;
    this->height = height;
    this->sprite = sprite;
}
