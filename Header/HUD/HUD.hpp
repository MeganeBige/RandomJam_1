#ifndef RANDOMJAM_HUD_HPP
#define RANDOMJAM_HUD_HPP

#include "Interface/Interface.hpp"

class HUD : public Interface
{
public:
    explicit HUD(bool debug, InputHandler *inputHandler);
    virtual ~HUD();
};

#endif //RANDOMJAM_HUD_HPP
