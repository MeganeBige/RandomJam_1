#ifndef RANDOMJAM_SURROUNDER_HPP
#define RANDOMJAM_SURROUNDER_HPP

#include <SFML/Graphics.hpp>

class Surrounder
{
public:
    explicit Surrounder();
    virtual ~Surrounder();

    void init(const sf::Vector2f &position, const sf::Vector2u &size, const sf::Color &color);
    void setPosition(float x, float y);

    sf::RectangleShape *getShape();

private:
    sf::Vector2f m_position;
    sf::Vector2f m_size;
    sf::RectangleShape m_rectShape;
};

#endif //RANDOMJAM_SURROUNDER_HPP
