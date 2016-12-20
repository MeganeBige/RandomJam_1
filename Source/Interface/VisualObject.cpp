#include "Interface/VisualObject.hpp"

VisualObject::VisualObject():
    m_mainSprite(),
    m_position()
{
    m_hidden = false;
    m_isActive = false;
    m_isOver = false;
    m_isEnable = false;
    m_timeElapsed = 0;
}

VisualObject::~VisualObject()
{
    // Empty
}

void VisualObject::draw(sf::RenderWindow *window)
{
    window->draw(m_mainSprite);
}

void VisualObject::bind(TriggerableObject *o)
{
    (void)o;
}

void VisualObject::init(std::string id, int x, int y, sf::Texture *texture)
{
    m_id = id;
    setPosition(x, y);

    if (texture != NULL)
        m_mainSprite.setTexture(*texture);

    m_mainSprite.setPosition(m_position);
}

std::string VisualObject::getId()
{
    return m_id;
}

sf::Sprite* VisualObject::getSprite()
{
    return &m_mainSprite;
}

sf::Vector2f* VisualObject::getPosition()
{
    return &m_position;
}

void VisualObject::setId(const std::string &id)
{
    m_id = id;
}

void VisualObject::setSprite(sf::Texture *texture)
{
    m_mainSprite.setTexture(*texture);
}

void VisualObject::setPosition(float x, float y)
{
    m_position.x = x;
    m_position.y = y;
    m_mainSprite.setPosition(m_position);
}

void VisualObject::setVisible(bool state)
{
    m_hidden = !state;
}

void VisualObject::setEnable(bool state)
{
    m_isEnable = state;
}