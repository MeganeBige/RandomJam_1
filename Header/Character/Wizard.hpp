#ifndef RANDOMJAM_WIZARD_HPP
#define RANDOMJAM_WIZARD_HPP

#include "Character/Character.hpp"

#define WIZARD_DAMAGE 3
#define WIZARD_RANGE 2
#define WIZARD_PRECISION 1

class Wizard : public Character
{
public:
    explicit Wizard(std::string name, unsigned int life, int x, int y);
    virtual ~Wizard();
};

#endif //RANDOMJAM_WIZARD_HPP
