#include "HUD/MenuHUD.hpp"
#include "Memory/Container.hpp"

MenuHUD::MenuHUD(bool debug, InputHandler *inputHandler):
    HUD(debug, inputHandler)
{
    Container<sf::Texture> *p_TContainer = Container<sf::Texture>::Instance();
}

MenuHUD::~MenuHUD()
{
    // Empty
}
