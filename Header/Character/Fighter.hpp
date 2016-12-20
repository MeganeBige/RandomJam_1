#ifndef RANDOMJAM_FIGHTER_HPP
#define RANDOMJAM_FIGHTER_HPP

#include "Character/Character.hpp"

#define FIGHTER_DAMAGE 2
#define FIGHTER_RANGE 1
#define FIGHTER_PRECISION 3

class Fighter : public Character
{
public:
    explicit Fighter(std::string name, unsigned int life, int x, int y);
    virtual ~Fighter();
};

#endif //RANDOMJAM_FIGHTER_HPP
