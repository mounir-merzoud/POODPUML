#ifndef MENU_HPP
#define MENU_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

enum MenuOption {
    Jouer,
    Options,
    Credits,
    Quitter,
    Aucun
};

MenuOption gererClicMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter, sf::Text& texteCredits);

void mettreAJourSurvolMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter, sf::Text& texteCredits, MenuOption& optionSelectionnee);

void centrerTexte(sf::Text& texte, sf::RenderWindow& fenetre);

void afficherFenetreOptions(bool& musiqueActivee, sf::Music& musique);

sf::Texture chargerCarteTMX(const std::string& nomFichier);

#endif // MENU_HPP

