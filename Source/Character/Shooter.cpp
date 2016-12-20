#include "Character/Shooter.hpp"

Shooter::Shooter(std::string name, unsigned int life, int x, int y):
    Character(name, life, x, y, SHOOTER_DAMAGE, SHOOTER_RANGE, SHOOTER_PRECISION)
{
    // Empty
}

Shooter::~Shooter()
{
    // Empty
}
