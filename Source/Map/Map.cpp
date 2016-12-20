#include "Map/Map.hpp"
#include "Memory/Container.hpp"

Map::Map(unsigned int length, unsigned int width):
    m_length(length),
    m_width(width)
{
    for (unsigned int i = 0; i < length; i++)
        for (unsigned int j = 0; j < width; j++)
            m_tiles.push_back(Tile());
}

Map::~Map()
{
    // Empty
}

void Map::init()
{
    for (unsigned int i = 0; i < m_length; i++)
        for (unsigned int j = 0; j < m_width; j++)
            m_tiles[i * m_width + j].init(i * 70, j * 70, false, Container<sf::Texture>::Instance()->GetResource("STANDARD_TILE"));
}

void Map::draw(sf::RenderWindow *window)
{
    for (unsigned int i = 0; i < m_tiles.size(); i++)
        m_tiles[i].draw(window);
}
