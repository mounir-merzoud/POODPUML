#include "Animation.hpp"
#include <iostream>

Animation::Animation(const std::vector<AnimationData>& animations, const std::string& animationName, const std::string& textureFile)
    : frameTime(0.05f), elapsedTime(0.0f), currentFrame(0), animationName(animationName), animations(animations)
{
    for (const auto& animation : animations) {
        if (animation.name == animationName) {
            frames = animation.frames;
            break;
        }
    }

    if (!texture.loadFromFile(textureFile)) {
        std::cerr << "Error loading texture from file: " << textureFile << std::endl;
    }
}

void Animation::update(float deltaTime) {
    elapsedTime += deltaTime;
    if (elapsedTime >= frameTime) {
        elapsedTime = 0.0f;
        currentFrame = (currentFrame + 1) % frames.size();
    }
}

void Animation::applyToSprite(sf::Sprite& sprite) {
    const Frame& frame = frames[currentFrame];
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(frame.x, frame.y, frame.width, frame.height));
}

void Animation::setAnimation(const std::string& animationName) {
    this->animationName = animationName;
    for (const auto& animation : animations) {
        if (animation.name == animationName) {
            frames = animation.frames;
            break;
        }
    }
}