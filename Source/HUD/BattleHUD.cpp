#include "HUD/BattleHUD.hpp"
#include "Memory/Container.hpp"

BattleHUD::BattleHUD(bool debug, InputHandler *inputHandler):
        HUD(debug, inputHandler)
{
    Container<sf::Texture> *p_TContainer = Container<sf::Texture>::Instance();
}

BattleHUD::~BattleHUD()
{
    // Empty
}
