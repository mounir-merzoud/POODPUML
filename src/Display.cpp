#include "Display.hpp"

Display::Display(std::string state)
{
    this->state = state;
}

void Display::draw(sf::Sprite& background, std::vector<std::shared_ptr<Monster>>& monsters, std::vector<std::shared_ptr<Projectile>>& projectiles,
std::vector<std::shared_ptr<Tower>>& towers, int money, int waveNumber, sf::RenderWindow& window)
{
    window.draw(background);
    for (auto it = monsters.begin(); it != monsters.end();) {
            auto& monster = *it;

        if (monster->name == "Scorpion") {
                monster->sprite.setScale(1.5f, 1.5f);
                monster->width = monster->animation.frames[0].width * 1.5f;
                monster->height = monster->animation.frames[0].height * 1.5f;
        };
        window.draw(monster->sprite);
        drawLifeBar(monster, window);
        ++it;
    }
    for (auto& projectile : projectiles) {
        window.draw(projectile->sprite);
    }
    for (auto tower : towers) {
        window.draw(tower->sprite);
        window.draw(tower->weapon->sprite);
    }
    sf::Font font;
    font.loadFromFile("assets/OpenSans-Regular.ttf");
    sf::Text text;
    text.setFont(font);
    text.setString("Money: " + std::to_string(money) + " Wave: " + std::to_string(waveNumber));
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setPosition(500, 10);
    window.draw(text);
    window.display();
}

void Display::drawLifeBar(std::shared_ptr<Monster>& monster, sf::RenderWindow& window)
{
    sf::RectangleShape lifeBar;
    lifeBar.setSize(sf::Vector2f(monster->width, 5));
    lifeBar.setFillColor(sf::Color::Red);
    lifeBar.setPosition(monster->positionX, monster->positionY - 10);
    window.draw(lifeBar);
    lifeBar.setSize(sf::Vector2f(std::max(0.0f, monster->width * (static_cast<float>(monster->health) / monster->maxHealth)), 5));
    lifeBar.setFillColor(sf::Color::Green);
    window.draw(lifeBar);
}