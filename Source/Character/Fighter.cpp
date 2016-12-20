#include "Character/Fighter.hpp"

Fighter::Fighter(std::string name, unsigned int life, int x, int y):
    Character(name, life, x, y, FIGHTER_DAMAGE, FIGHTER_RANGE, FIGHTER_PRECISION)
{
    // Empty
}

Fighter::~Fighter()
{
    // Empty
}
