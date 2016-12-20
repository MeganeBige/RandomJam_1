#include "Character/Character.hpp"

Character::Character(std::string name, unsigned int life, int x, int y, unsigned int damage,
                     unsigned int range, unsigned int precision):
    m_name(name),
    m_life(life),
    m_position(sf::Vector2f(x, y)),
    m_damage(damage),
    m_range(range),
    m_precision(precision)
{
    // Empty
}

Character::~Character()
{
    // Empty
}

void Character::update(double time)
{
    (void)time;
}

const sf::Vector2f & Character::getPosition() const
{
    return m_position;
}