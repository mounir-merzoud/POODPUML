#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

enum MenuOption {
    Jouer,
    Options,
    Quitter,
    Aucun
};

MenuOption gererClicMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter) {
    sf::Vector2i positionSouris = sf::Mouse::getPosition(fenetre);
    if (texteJouer.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
        return MenuOption::Jouer;
    }
    if (texteOptions.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
        return MenuOption::Options;
    }
    if (texteQuitter.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
        return MenuOption::Quitter;
    }
    return MenuOption::Aucun;
}

void mettreAJourSurvolMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter, MenuOption& optionSelectionnee) {
    sf::Vector2i positionSouris = sf::Mouse::getPosition(fenetre);

    if (optionSelectionnee == MenuOption::Aucun) {
        texteJouer.setFillColor(sf::Color::Green);
        texteOptions.setFillColor(sf::Color::Green);
        texteQuitter.setFillColor(sf::Color::Red);

        if (texteJouer.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
            texteJouer.setFillColor(sf::Color::Yellow);
        } else if (texteOptions.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
            texteOptions.setFillColor(sf::Color::Yellow);
        } else if (texteQuitter.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
            texteQuitter.setFillColor(sf::Color::Yellow);
        }
    } else {
        if (optionSelectionnee == MenuOption::Jouer) {
            texteJouer.setFillColor(sf::Color::Black);
        } else if (optionSelectionnee == MenuOption::Options) {
            texteOptions.setFillColor(sf::Color::Black);
        } else if (optionSelectionnee == MenuOption::Quitter) {
            texteQuitter.setFillColor(sf::Color::Black);
        }
    }
}

void centrerTexte(sf::Text& texte, sf::RenderWindow& fenetre) {
    sf::FloatRect rect = texte.getLocalBounds();
    texte.setOrigin(rect.left + rect.width / 2.0f, rect.top + rect.height / 2.0f);
    texte.setPosition(fenetre.getSize().x / 2.0f, texte.getPosition().y);
}

void afficherFenetreOptions(sf::RenderWindow& fenetre, bool& musiqueActivee) {
    sf::RenderWindow fenetreOptions(sf::VideoMode(400, 200), "Options");
    
    sf::Font police;
    if (!police.loadFromFile("assets/Supermassive Black Hole - TTF.ttf")) { 
        std::cerr << "Erreur de chargement de la police\n";
        return;
    }

    sf::Text texteMusique;
    texteMusique.setFont(police);
    texteMusique.setString("Activer / Désactiver la musique");
    texteMusique.setCharacterSize(20);
    texteMusique.setPosition(50, 50);

    sf::RectangleShape boutonActiver(sf::Vector2f(20, 20));
    boutonActiver.setFillColor(sf::Color::Green);
    boutonActiver.setPosition(50, 100);

    sf::RectangleShape boutonDesactiver(sf::Vector2f(20, 20));
    boutonDesactiver.setFillColor(sf::Color::Red);
    boutonDesactiver.setPosition(150, 100);

    while (fenetreOptions.isOpen()) {
        sf::Event evenement;
        while (fenetreOptions.pollEvent(evenement)) {
            if (evenement.type == sf::Event::Closed) {
                fenetreOptions.close();
            }
            if (evenement.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f positionSouris = sf::Vector2f(sf::Mouse::getPosition(fenetreOptions));
                if (boutonActiver.getGlobalBounds().contains(positionSouris)) {
                    musiqueActivee = true;
                    fenetreOptions.close();
                }
                if (boutonDesactiver.getGlobalBounds().contains(positionSouris)) {
                    musiqueActivee = false;
                    fenetreOptions.close();
                }
            }
        }

        fenetreOptions.clear();
        fenetreOptions.draw(texteMusique);
        fenetreOptions.draw(boutonActiver);
                fenetreOptions.draw(boutonDesactiver);
        fenetreOptions.display();
    }
}

int main() {
    sf::RenderWindow fenetre(sf::VideoMode(1000, 800), "Menu Tower Defense");

    sf::Font police;
    if (!police.loadFromFile("assets/Supermassive Black Hole - TTF.ttf")) { 
        std::cerr << "Erreur de chargement de la police\n";
        return -1;
    }

    sf::Text texteJouer;
    texteJouer.setFont(police);
    texteJouer.setString("Jouer");
    texteJouer.setCharacterSize(50);
    texteJouer.setPosition(500, 300);
    texteJouer.setFillColor(sf::Color::Green);
    centrerTexte(texteJouer, fenetre);

    sf::Text texteOptions;
    texteOptions.setFont(police);
    texteOptions.setString("Options");
    texteOptions.setCharacterSize(50);
    texteOptions.setPosition(500, 400);
    texteOptions.setFillColor(sf::Color::Green);
    centrerTexte(texteOptions, fenetre);

    sf::Text texteQuitter;
    texteQuitter.setFont(police);
    texteQuitter.setString("Quitter");
    texteQuitter.setCharacterSize(50);
    texteQuitter.setPosition(500, 500);
    texteQuitter.setFillColor(sf::Color::Red);
    centrerTexte(texteQuitter, fenetre);

    sf::Texture texture;
    if (!texture.loadFromFile("assets/2x1_NSwitchDS_FantasyTowerDefense_image1600w.jpg")) {
        std::cerr << "Erreur de chargement de l'image de fond\n";
        return -1;
    }
    sf::Sprite sprite(texture);
    sprite.setScale((float)fenetre.getSize().x / sprite.getTexture()->getSize().x, (float)fenetre.getSize().y / sprite.getTexture()->getSize().y);

    bool musiqueActivee = true;
    MenuOption optionSelectionnee = MenuOption::Aucun;

    while (fenetre.isOpen()) {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement)) {
            if (evenement.type == sf::Event::Closed) {
                fenetre.close();
            }
            if (evenement.type == sf::Event::MouseButtonPressed) {
                optionSelectionnee = gererClicMenu(fenetre, texteJouer, texteOptions, texteQuitter);
                if (optionSelectionnee == MenuOption::Jouer) {
                    std::cout << "Jouer sélectionné\n";
                    // Démarrer le jeu
                } else if (optionSelectionnee == MenuOption::Options) {
                    std::cout << "Options sélectionné\n";
                    afficherFenetreOptions(fenetre, musiqueActivee);
                } else if (optionSelectionnee == MenuOption::Quitter) {
                    fenetre.close();
                }
            }
        }

        mettreAJourSurvolMenu(fenetre, texteJouer, texteOptions, texteQuitter, optionSelectionnee);

        fenetre.clear();
        fenetre.draw(sprite); // Ajout de l'image de fond
        fenetre.draw(texteJouer);
        fenetre.draw(texteOptions);
        fenetre.draw(texteQuitter);
        fenetre.display();
    }

    return 0;
}