#ifndef RANDOMJAM_TILE_HPP
#define RANDOMJAM_TILE_HPP

#include "Utils/Drawable.hpp"

class Tile : public Drawable
{
public:
    explicit Tile();
    virtual ~Tile();

    void init(int x, int y, bool blocked, sf::Texture *texture);
    virtual void draw(sf::RenderWindow *window);

    void setPosition(float x, float y);

private:
    sf::Sprite m_mainSprite;
    sf::Vector2f m_position;
    bool m_isBlocked;
};

#endif //RANDOMJAM_TILE_HPP
