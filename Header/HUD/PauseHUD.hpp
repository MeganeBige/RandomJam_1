#ifndef RANDOMJAM_PAUSEHUD_HPP
#define RANDOMJAM_PAUSEHUD_HPP

#include "HUD/HUD.hpp"

class PauseHUD : public HUD
{
public:
    explicit PauseHUD(bool debug, InputHandler *inputHandler);
    virtual ~PauseHUD();

private:
    // TODO - Components of the Pause
};

#endif //RANDOMJAM_PAUSEHUD_HPP
