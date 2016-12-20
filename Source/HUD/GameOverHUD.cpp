#include "HUD/GameOverHUD.hpp"
#include "Memory/Container.hpp"

GameOverHUD::GameOverHUD(bool debug, InputHandler *inputHandler):
        HUD(debug, inputHandler)
{
    Container<sf::Texture> *p_TContainer = Container<sf::Texture>::Instance();
}

GameOverHUD::~GameOverHUD()
{
    // Empty
}
