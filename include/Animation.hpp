#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

struct Frame {
    int x, y, width, height;
};

struct AnimationData {
    std::string name;
    std::vector<Frame> frames;
};

class Animation {
public:
    Animation(const std::vector<AnimationData>& animations, const std::string& animationName, const std::string& textureFile);

    void update(float deltaTime);
    void applyToSprite(sf::Sprite& sprite);
    void setAnimation(const std::string& animationName);

    std::string animationName;
    sf::Texture texture;

private:
    std::vector<Frame> frames;    
    float frameTime;
    float elapsedTime;
    size_t currentFrame;
    const std::vector<AnimationData>& animations;
};

#endif