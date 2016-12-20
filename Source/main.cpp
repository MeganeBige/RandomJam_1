#include "Game.hpp"

int main()
{
    Game game;
    game.init();

    sf::Clock clock;
    sf::Time time;
    double timeElapsed;

    while (game.windowsIsOpen())
    {
        time = clock.getElapsedTime();
        timeElapsed = time.asSeconds();
        clock.restart();

        game.gameLoop(timeElapsed);
    }

    return 0;
}