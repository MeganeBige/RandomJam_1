#include "HUD/CampHUD.hpp"
#include "Memory/Container.hpp"

CampHUD::CampHUD(bool debug, InputHandler *inputHandler):
        HUD(debug, inputHandler)
{
    Container<sf::Texture> *p_TContainer = Container<sf::Texture>::Instance();
}

CampHUD::~CampHUD()
{
    // Empty
}
