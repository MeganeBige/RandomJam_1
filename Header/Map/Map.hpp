#ifndef RANDOMJAM_MAP_HPP
#define RANDOMJAM_MAP_HPP

#include <vector>

#include "Map/Tile.hpp"

class Map : public Drawable
{
public:
    explicit Map(unsigned int length, unsigned int width);
    virtual ~Map();

    void init();
    virtual void draw(sf::RenderWindow *window);

private:
    std::vector<Tile> m_tiles;
    unsigned int m_length;
    unsigned int m_width;
};

#endif //RANDOMJAM_MAP_HPP
