#ifndef SHOP_HPP
#define SHOP_HPP

#include <SFML/Graphics.hpp>

class Shop {
public:
    Shop();

    void handleEvent(const sf::Event& event, sf::RenderWindow& window);
    void update();
    void draw(sf::RenderWindow& window);

    // Méthode pour changer l'état
    void changeState();

private:
    void initializeText(sf::Text& text, const std::string& str, float y);

    sf::Font font;

    sf::Text title;
    sf::Text tower1Text;
    sf::Text tower2Text;
    sf::Text exitText;

    sf::Texture tower1Texture;
    sf::Texture tower2Texture;
    sf::Sprite tower1Sprite;
    sf::Sprite tower2Sprite;

    int currentState; // État actuel de la boutique (peut être un enum par exemple)
};

#endif // SHOP_HPP
