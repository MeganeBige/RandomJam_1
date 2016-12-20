#ifndef RANDOMJAM_GAME_HPP
#define RANDOMJAM_GAME_HPP

#include <SFML/Graphics.hpp>

class Game
{
public:
    Game();

    void init();
    void gameLoop(double time);
    void handleInput();
    void draw();

    bool windowsIsOpen() const;

private:
    sf::RenderWindow m_window;
};

#endif //RANDOMJAM_GAME_HPP
