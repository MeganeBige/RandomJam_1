#ifndef RANDOMJAM_DRAWABLE_HPP
#define RANDOMJAM_DRAWABLE_HPP

#include <SFML/Graphics.hpp>

class Drawable
{
public:
    virtual void draw(sf::RenderWindow *window) = 0;
};

#endif //RANDOMJAM_DRAWABLE_HPP
