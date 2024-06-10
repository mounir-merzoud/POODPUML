#include <SFML/Graphics.hpp>
#include "GameObjectFactory.hpp"
#include "CollisionHandler.hpp"
#include "WaveManager.hpp"
#include "GameData.hpp"
#include "Display.hpp"
#include "GameManager.hpp"
#include "Menu.hpp"
#include <iostream>
#include <vector>
#include <string>

MenuOption gererClicMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter, sf::Text& texteCredits) {
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
    if (texteCredits.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
        return MenuOption::Credits;
    }
    return MenuOption::Aucun;
}

void mettreAJourSurvolMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter, sf::Text& texteCredits, MenuOption& optionSelectionnee) {
    sf::Vector2i positionSouris = sf::Mouse::getPosition(fenetre);

    if (optionSelectionnee == MenuOption::Aucun) {
        texteJouer.setFillColor(sf::Color::Black);
        texteOptions.setFillColor(sf::Color::Black);
        texteQuitter.setFillColor(sf::Color::Red);
        texteCredits.setFillColor(sf::Color::Black);

        if (texteJouer.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
            texteJouer.setFillColor(sf::Color::Yellow);
        } else if (texteOptions.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
            texteOptions.setFillColor(sf::Color::Yellow);
        } else if (texteQuitter.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
            texteQuitter.setFillColor(sf::Color::Yellow);
        } else if (texteCredits.getGlobalBounds().contains(static_cast<sf::Vector2f>(positionSouris))) {
            texteCredits.setFillColor(sf::Color::Yellow);
        }
    } else {
        if (optionSelectionnee == MenuOption::Jouer) {
            texteJouer.setFillColor(sf::Color::Black);
        } else if (optionSelectionnee == MenuOption::Options) {
            texteOptions.setFillColor(sf::Color::Black);
        } else if (optionSelectionnee == MenuOption::Quitter) {
            texteQuitter.setFillColor(sf::Color::Black);
        } else if (optionSelectionnee == MenuOption::Credits) {
            texteCredits.setFillColor(sf::Color::Black);
        }
    }
}

void centrerTexte(sf::Text& texte, sf::RenderWindow& fenetre) {
    sf::FloatRect rect = texte.getLocalBounds();
    texte.setOrigin(rect.left + rect.width / 2.0f, rect.top + rect.height / 2.0f);
    texte.setPosition(fenetre.getSize().x / 2.0f, texte.getPosition().y);
}

void afficherFenetreOptions(bool& musiqueActivee, sf::Music& musique) {
    sf::RenderWindow fenetreOptions(sf::VideoMode(400, 200), "Options");

    sf::Font police;
    if (!police.loadFromFile("assets/Supermassive Black Hole - TTF.ttf")) {
        std::cerr << "Erreur de chargement de la police\n";
        return;
    }

    sf::Texture textureIconeActiver;
    if (!textureIconeActiver.loadFromFile("assets/la-musique (1).png")) {
        std::cerr << "Erreur de chargement de l'icone d'activation\n";
        return;
    }

    sf::Texture textureIconeDesactiver;
    if (!textureIconeDesactiver.loadFromFile("assets/la-musique.png")) {
        std::cerr << "Erreur de chargement de l'icone de désactivation\n";
        return;
    }

    sf::Sprite spriteIconeActiver(textureIconeActiver);
    spriteIconeActiver.setScale(0.1f, 0.1f);
    spriteIconeActiver.setPosition(50, 50);

    sf::Sprite spriteIconeDesactiver(textureIconeDesactiver);
    spriteIconeDesactiver.setScale(0.1f, 0.1f);
    spriteIconeDesactiver.setPosition(150, 50);

    

    while (fenetreOptions.isOpen()) {
        sf::Event evenement;
        while (fenetreOptions.pollEvent(evenement)) {
            if (evenement.type == sf::Event::Closed) {
                fenetreOptions.close();
            }
            if (evenement.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f positionSouris = sf::Vector2f(sf::Mouse::getPosition(fenetreOptions));
                if (spriteIconeActiver.getGlobalBounds().contains(positionSouris)) {
                    musiqueActivee = true;
                    musique.play();
                }
                if (spriteIconeDesactiver.getGlobalBounds().contains(positionSouris)) {
                    musiqueActivee = false;
                    musique.stop();
                }
            }
        }

        fenetreOptions.clear(sf::Color::White);
        fenetreOptions.draw(spriteIconeActiver);
        fenetreOptions.draw(spriteIconeDesactiver);
        fenetreOptions.display();
    }
}

int ouvrirFenetreJeu() {
    sf::RenderWindow window(sf::VideoMode(775, 775), "SFML window", sf::Style::Fullscreen);

    //towers.push_back(tower);
    //towers.push_back(tower02);

    //load background image
    sf::Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("assets/sprites/bkg.png")) {
        std::cerr << "Failed to load background image" << std::endl;
        return 1;
    }
    sf::Sprite backgroundSprite(backgroundTexture);

    sf::Vector2u textureSize = backgroundTexture.getSize();
    sf::Vector2u windowSize = window.getSize();
    float scaleX = (float)windowSize.x / textureSize.x;
    float scaleY = (float)windowSize.y / textureSize.y;
    backgroundSprite.setScale(scaleX, scaleY);

    sf::Clock deltaTimeClock;
    sf::Clock clock;
    float currentTime;
    
    WaveManager waveManager = WaveManager(currentTime, monsters, waveNumber, killCount);
    Display display = Display(state);
    GameManager gameManager = GameManager(state);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                    for (auto& tower : towers) {
                        if (tower->sprite.getGlobalBounds().contains(mousePosition.x, mousePosition.y) && tower->name == "Tower01") {
                            switch (tower->price) {
                                case 100:
                                    if (money >= 200) {
                                        tower->upgrade(weapon01Level02, 200);
                                        money -= 200;
                                    }
                                    break;
                                case 200:
                                    if (money >= 300) {
                                        tower->upgrade(weapon01Level03, 300);
                                        money -= 300;
                                    }
                                    break;
                                default:
                                    break;
                            }
                        }
                        if (tower->sprite.getGlobalBounds().contains(mousePosition.x, mousePosition.y) && tower->name == "Tower02") {
                            switch (tower->price) {
                                case 100:
                                    if (money >= 200) {
                                        tower->upgrade(weapon02Level02, 200);
                                        money -= 200;
                                    }
                                    break;
                                case 200:
                                    if (money >= 300) {
                                        tower->upgrade(weapon02Level03, 300);
                                        money -= 300;
                                    }
                                    break;
                                default:
                                    break;
                            }
                        }
                    }
                }
            }
        }

        
                
        float deltaTime = deltaTimeClock.restart().asSeconds();
        currentTime = clock.getElapsedTime().asSeconds();

        waveManager.HandleSpawn(deltaTime);
        gameManager.update(deltaTime, monsters, projectiles, towers, killCount, money, currentTime);
        CollisionHandler::handleCollisions(monsters, projectiles);
        display.draw(backgroundSprite, monsters, projectiles, towers, money, waveNumber, window, lives);

    }
    return 0;
}

int main() {
    sf::RenderWindow fenetre(sf::VideoMode(1000, 800), "Menu Tower Defense");

    sf::Font police;
    if (!police.loadFromFile("assets/Supermassive Black Hole - TTF.ttf")) {
        std::cerr << "Erreur de chargement de la police\n";
        return -1;
    }
    sf::Music musique;
    if (!musique.openFromFile("assets/pixel-fight-8-bit-arcade-music-background-music-for-video-208775.mp3")) {
        std::cerr << "Erreur de chargement de la musique\n";
        return -1;
    }
    musique.setLoop(true);
    musique.play();

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

    sf::Text texteCredits;
    texteCredits.setFont(police);
    texteCredits.setString("Credits");
    texteCredits.setCharacterSize(50);
    texteCredits.setPosition(500, 500);
    texteCredits.setFillColor(sf::Color::Green);
    centrerTexte(texteCredits, fenetre);

    sf::Text texteQuitter;
    texteQuitter.setFont(police);
    texteQuitter.setString("Quitter");
    texteQuitter.setCharacterSize(50);
    texteQuitter.setPosition(500, 600);
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
                optionSelectionnee = gererClicMenu(fenetre, texteJouer, texteOptions, texteQuitter, texteCredits);
                if (optionSelectionnee == MenuOption::Jouer) {
                    std::cout << "Jouer sélectionné\n";
                    ouvrirFenetreJeu();
                } else if (optionSelectionnee == MenuOption::Options) {
                    std::cout << "Options sélectionné\n";
                    afficherFenetreOptions(musiqueActivee, musique);
                } else if (optionSelectionnee == MenuOption::Credits) {
                    std::cout << "Credits sélectionné\n";
                } else if (optionSelectionnee == MenuOption::Quitter) {
                    std::cout << "Quitter sélectionné\n";
                    fenetre.close();
                }
            }
        }

        // Mettre à jour le survol du menu
        mettreAJourSurvolMenu(fenetre, texteJouer, texteOptions, texteQuitter, texteCredits, optionSelectionnee);

        // Effacer la fenêtre
        fenetre.clear();

        // Afficher le menu principal
        fenetre.clear();
        fenetre.draw(sprite);
        fenetre.draw(texteJouer);
        fenetre.draw(texteOptions);
        fenetre.draw(texteQuitter);
        fenetre.draw(texteCredits);
        fenetre.display();
    }

    return 0;
}