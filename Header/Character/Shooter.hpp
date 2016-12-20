#ifndef RANDOMJAM_SHOOTER_HPP
#define RANDOMJAM_SHOOTER_HPP

#include "Character/Character.hpp"

#define SHOOTER_DAMAGE 1
#define SHOOTER_RANGE 3
#define SHOOTER_PRECISION 2

class Shooter : public Character
{
public:
    explicit Shooter(std::string name, unsigned int life, int x, int y);
    virtual ~Shooter();
};

#endif //RANDOMJAM_SHOOTER_HPP
