#ifndef RANDOMJAM_BATTLEHUD_HPP
#define RANDOMJAM_BATTLEHUD_HPP

#include "HUD/HUD.hpp"

class BattleHUD : public HUD
{
public:
    explicit BattleHUD(bool debug, InputHandler *inputHandler);
    virtual ~BattleHUD();

private:
    // TODO - Components of the Battle
};

#endif //RANDOMJAM_BATTLEHUD_HPP
