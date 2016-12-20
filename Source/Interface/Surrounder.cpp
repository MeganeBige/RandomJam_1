#include "Interface/Surrounder.hpp"

Surrounder::Surrounder():
    m_position(sf::Vector2f(0, 0)),
    m_size(sf::Vector2u(0, 0)),
    m_rectShape(m_size)
{
    // Empty
}

Surrounder::~Surrounder()
{
    // Empty
}

void Surrounder::init(const sf::Vector2f &position, const sf::Vector2u &size, const sf::Color &color)
{
    m_position.x = position.x;
    m_position.y = position.y;

    m_size.x = (float)size.x;
    m_size.y = (float)size.y;

    m_rectShape.setPosition(m_position);
    m_rectShape.setSize(m_size);

    m_rectShape.setFillColor(sf::Color::Transparent);
    m_rectShape.setOutlineColor(color);
    m_rectShape.setOutlineThickness(1);
}

void Surrounder::setPosition(float x, float y)
{
    m_position.x = x;
    m_position.y = y;

    m_rectShape.setPosition(m_position);
}

sf::RectangleShape* Surrounder::getShape()
{
    return &m_rectShape;
}

