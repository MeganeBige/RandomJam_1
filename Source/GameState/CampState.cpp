#include "GameState/CampState.hpp"

CampState::CampState():
        InputHandler(LD_DEBUG),
        m_HUD(LD_DEBUG, this)
{
    // Empty
}

CampState::~CampState()
{
    // Empty
}

void CampState::init()
{
    // Empty
}

bool CampState::onEnter()
{
    return true;
}

bool CampState::onExit()
{
    return true;
}

void CampState::update(double time)
{
    m_HUD.update(time);
}

void CampState::onPollEvent(sf::Event &event)
{
    m_HUD.handleInput(event);
}

void CampState::draw(sf::RenderWindow *window)
{
    m_HUD.draw(window);
}
