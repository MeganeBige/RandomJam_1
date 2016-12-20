#ifndef RANDOMJAM_CHARACTER_HPP
#define RANDOMJAM_CHARACTER_HPP

#include <string>
#include <SFML/Graphics.hpp>

#include "Utils/Updatable.hpp"

class Character : public Updatable
{
public:
    explicit Character(std::string name, unsigned int life, int x, int y, unsigned int damage,
                       unsigned int range, unsigned int precision);
    virtual ~Character();

    virtual void update(double time);

    virtual sf::Vector2f const& getPosition() const;

private:
    std::string m_name;
    unsigned int m_life;
    sf::Vector2f m_position;

    unsigned int m_damage;
    unsigned int m_range;
    unsigned int m_precision;
};

#endif //RANDOMJAM_CHARACTER_HPP
