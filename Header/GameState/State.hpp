#ifndef RANDOMJAM_STATE_HPP
#define RANDOMJAM_STATE_HPP

#include <SFML/Graphics.hpp>

#include "Utils/Updatable.hpp"
#include "Utils/Drawable.hpp"

class State : public Updatable, public Drawable
{
public:
    explicit State();
    virtual ~State();

    virtual void onPollEvent(sf::Event& event) = 0;
    virtual void draw(sf::RenderWindow *window) = 0;
    virtual bool onEnter() = 0;
    virtual bool onExit() = 0;
};

#endif //RANDOMJAM_STATE_HPP
