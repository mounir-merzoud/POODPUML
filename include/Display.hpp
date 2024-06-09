#ifndef Display_hpp
#define Display_hpp
#include "GameData.hpp"
#include <SFML/Graphics.hpp>

class Display {
    public:
        Display(std::string state);
        void draw(sf::Sprite& background, std::vector<std::shared_ptr<Monster>>& monsters, std::vector<std::shared_ptr<Projectile>>& projectiles,
        std::vector<std::shared_ptr<Tower>>& towers, int money, int& waveNumber, sf::RenderWindow& window);
        void drawLifeBar(std::shared_ptr<Monster>& monster, sf::RenderWindow& window);

    private:
        std::string state;
};

#endif