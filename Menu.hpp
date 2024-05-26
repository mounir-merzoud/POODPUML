#ifndef MENU_HPP
#define MENU_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

enum MenuOption {
    Jouer,
    Options,
    Quitter,
    Aucun
};

MenuOption gererClicMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter);
void mettreAJourSurvolMenu(sf::RenderWindow& fenetre, sf::Text& texteJouer, sf::Text& texteOptions, sf::Text& texteQuitter, MenuOption& optionSelectionnee);
void centrerTexte(sf::Text& texte, sf::RenderWindow& fenetre);
void afficherFenetreOptions(sf::RenderWindow& fenetre, bool& musiqueActivee, sf::Music& musique);

#endif // MENU_HPP
