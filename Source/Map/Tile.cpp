#include "Map/Tile.hpp"

Tile::Tile():
    m_mainSprite(),
    m_position(),
    m_isBlocked(false)
{
    // Empty
}

Tile::~Tile()
{
    // Empty
}

void Tile::init(int x, int y, bool blocked, sf::Texture *texture)
{
    setPosition(x, y);
    m_isBlocked = blocked;

    if (texture != NULL)
        m_mainSprite.setTexture(*texture);

    m_mainSprite.setPosition(m_position);
}

void Tile::draw(sf::RenderWindow *window)
{
    window->draw(m_mainSprite);
}

void Tile::setPosition(float x, float y)
{
    m_position.x = x;
    m_position.y = y;
    m_mainSprite.setPosition(m_position);
}
