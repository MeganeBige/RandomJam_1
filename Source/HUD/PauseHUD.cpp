#include "HUD/PauseHUD.hpp"
#include "Memory/Container.hpp"

PauseHUD::PauseHUD(bool debug, InputHandler *inputHandler):
        HUD(debug, inputHandler)
{
    Container<sf::Texture> *p_TContainer = Container<sf::Texture>::Instance();
}

PauseHUD::~PauseHUD()
{
    // Empty
}
