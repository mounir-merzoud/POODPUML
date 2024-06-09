#ifndef MENU_HPP
#define MENU_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

enum class MenuOption {
    Jouer,
    Options,
    Credits,
    Quitter,
    Aucun
};

class GameState {
public:
    virtual ~GameState() {}
    virtual void handleInput(sf::RenderWindow& window) = 0;
    virtual void update() = 0;
    virtual void render(sf::RenderWindow& window) = 0;
    virtual MenuOption getOptionSelectionnee() const = 0;
};

class MenuPrincipalState : public GameState {
public:
    MenuPrincipalState(sf::Font& font, sf::RenderWindow& window);
    void handleInput(sf::RenderWindow& window) override;
    void update() override;
    void render(sf::RenderWindow& window) override;
    MenuOption getOptionSelectionnee() const override;
    void setOptionSelectionnee(MenuOption option);

private:
    sf::RenderWindow& fenetre;
    sf::Sprite sprite;
    sf::Texture texture;
    sf::Font& font;
    sf::Text texteJouer;
    sf::Text texteOptions;
    sf::Text texteCredits;
    sf::Text texteQuitter;
    MenuOption optionSelectionnee = MenuOption::Aucun;

    void setupText(sf::Text& text, const std::string& str, float y);
    MenuOption gererClicMenu(sf::RenderWindow& window);
    void centrerTexte(sf::Text& texte, sf::RenderWindow& window);
};

class JeuState : public GameState {
public:
    JeuState(sf::Font& font, sf::RenderWindow& window);
    void handleInput(sf::RenderWindow& window) override;
    void update() override;
    void render(sf::RenderWindow& window) override;
    MenuOption getOptionSelectionnee() const override;

private:
    sf::RenderWindow& fenetre;
};

class OptionsState : public GameState {
public:
    OptionsState(sf::Font& font, sf::RenderWindow& window);
    void handleInput(sf::RenderWindow& window) override;
    void update() override;
    void render(sf::RenderWindow& window) override;
    MenuOption getOptionSelectionnee() const override;

private:
    sf::RenderWindow& fenetre;
};

class CreditsState : public GameState {
public:
    CreditsState(sf::Font& font, sf::RenderWindow& window);
    void handleInput(sf::RenderWindow& window) override;
    void update() override;
    void render(sf::RenderWindow& window) override;
    MenuOption getOptionSelectionnee() const override;

private:
    sf::RenderWindow& fenetre;
};

#endif // MENU_HPP