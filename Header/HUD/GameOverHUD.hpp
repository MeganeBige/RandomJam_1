#ifndef RANDOMJAM_GAMEOVERHUD_HPP
#define RANDOMJAM_GAMEOVERHUD_HPP

#include "HUD/HUD.hpp"

class GameOverHUD : public HUD
{
public:
    explicit GameOverHUD(bool debug, InputHandler *inputHandler);
    virtual ~GameOverHUD();

private:
    // TODO - Components of the GameOver
};

#endif //RANDOMJAM_GAMEOVERHUD_HPP
