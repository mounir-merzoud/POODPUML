#include "Shope.hpp"


Shop::Shop() : currentState(0) {
    if (!font.loadFromFile("assets/Supermassive Black Hole - TTF.ttf")) {
        throw std::runtime_error("Erreur de chargement de la police");
    }

    if (!tower1Texture.loadFromFile("assets/tower1.png") ||
        !tower2Texture.loadFromFile("assets/tower2.png")) {
        throw std::runtime_error("Erreur de chargement des textures des tours");
    }

    tower1Sprite.setTexture(tower1Texture);
    tower2Sprite.setTexture(tower2Texture);

    tower1Sprite.setPosition(450, 150);
    tower2Sprite.setPosition(450, 250);

    initializeText(title, "Boutique", 50);
    initializeText(tower1Text, "Tour 1 - 100", 150);
    initializeText(tower2Text, "Tour 2 - 200", 250);
    initializeText(exitText, "Retour", 350);
}
void Shop::initializeText(sf::Text& text, const std::string& str, float y) {
    text.setFont(font);
    text.setString(str);
    text.setCharacterSize(50);
    text.setPosition(500, y);
    text.setFillColor(sf::Color::Green);
    text.setOrigin(text.getLocalBounds().width / 2, text.getLocalBounds().height / 2);
}

void Shop::handleEvent(const sf::Event& event, sf::RenderWindow& window) {
    // Logique pour gérer les événements en fonction de l'état actuel
    if (event.type == sf::Event::MouseButtonPressed) {
        sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        if (tower1Text.getGlobalBounds().contains(mousePos)) {
            if (currentState == 0) {
                currentState = 1;
                // Logique pour acheter la tour 1
            }
        } else if (tower2Text.getGlobalBounds().contains(mousePos)) {
            if (currentState == 0) {
                currentState = 2;
                // Logique pour acheter la tour 2
            }
        } else if (exitText.getGlobalBounds().contains(mousePos)) {
            // Logique pour retourner au jeu principal
        }
    }
}

void Shop::update() {
    // Mise à jour si nécessaire
}

void Shop::draw(sf::RenderWindow& window) {
    window.draw(title);
    window.draw(tower1Text);
    window.draw(tower2Text);
    window.draw(exitText);
   
}

void Shop::changeState() {
    
    if (currentState == 0) {
        currentState = 1; 
    } else if (currentState == 1) {
        currentState = 2; 
    } else {
        currentState = 0; 
    }
}
