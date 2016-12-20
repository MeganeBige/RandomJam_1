#ifndef RANDOMJAM_MENUVIEW_HPP
#define RANDOMJAM_MENUVIEW_HPP

#include "HUD/HUD.hpp"

class MenuHUD : public HUD
{
public:
    explicit MenuHUD(bool debug, InputHandler *inputHandler);
    virtual ~MenuHUD();

private:
    // TODO - Components of the Menu
};

#endif //RANDOMJAM_MENUVIEW_HPP
