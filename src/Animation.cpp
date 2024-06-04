#include "Animation.hpp"
#include <iostream>

Animation::Animation(const std::vector<AnimationData>& animations, const std::string& animationName, const std::string& textureFile)
    : frameTime(0.05f), elapsedTime(0.0f), currentFrame(0), animationName(animationName), animations(animations), playOnce(false), finished(false)
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
    if (finished) return;

    elapsedTime += deltaTime;
    if (elapsedTime >= frameTime) {
        elapsedTime = 0.0f;
        currentFrame++;
        if (currentFrame >= frames.size()) {
            if (playOnce) {
                finished = true;
                currentFrame = frames.size() - 1; // Stay on the last frame
            } else {
                currentFrame = 0; // Loop the animation
            }
        }
    }
}

void Animation::applyToSprite(sf::Sprite& sprite) {
    const Frame& frame = frames[currentFrame];
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(frame.x, frame.y, frame.width, frame.height));
}

void Animation::setAnimation(const std::string& animationName, bool playOnce) {
    if (this->animationName != animationName){
        this->animationName = animationName;
        this->playOnce = playOnce;
        this->finished = false;

        for (const auto& animation : animations) {
            if (animation.name == animationName) {
                frames = animation.frames;
                currentFrame = 0;
                break; 
            }
        }
    }
}

void Animation::setFrameTime(float frameTime) {
    this->frameTime = frameTime;
}

bool Animation::isFinished() const {
    return finished;
}