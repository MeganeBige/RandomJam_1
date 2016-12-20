#include "GameState/PauseState.hpp"

PauseState::PauseState():
        InputHandler(LD_DEBUG),
        m_HUD(LD_DEBUG, this)
{
    // Empty
}

PauseState::~PauseState()
{
    // Empty
}

void PauseState::init()
{
    // Empty
}

bool PauseState::onEnter()
{
    return true;
}

bool PauseState::onExit()
{
    return true;
}

void PauseState::update(double time)
{
    m_HUD.update(time);
}

void PauseState::onPollEvent(sf::Event &event)
{
    m_HUD.handleInput(event);
}

void PauseState::draw(sf::RenderWindow *window)
{
    m_HUD.draw(window);
}
