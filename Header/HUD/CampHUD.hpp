#ifndef RANDOMJAM_CAMPHUD_HPP
#define RANDOMJAM_CAMPHUD_HPP

#include "HUD/HUD.hpp"

class CampHUD : public HUD
{
public:
    explicit CampHUD(bool debug, InputHandler *inputHandler);
    virtual ~CampHUD();

private:
    // TODO - Components of the Camp
};

#endif //RANDOMJAM_CAMPHUD_HPP
