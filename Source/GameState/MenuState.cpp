#include "GameState/MenuState.hpp"

MenuState::MenuState():
    InputHandler(LD_DEBUG),
    m_HUD(LD_DEBUG, this)
{
    // Empty
}

MenuState::~MenuState()
{
    // Empty
}

void MenuState::init()
{
    // Empty
}

bool MenuState::onEnter()
{
    return true;
}

bool MenuState::onExit()
{
    return true;
}

void MenuState::update(double time)
{
    m_HUD.update(time);
}

void MenuState::onPollEvent(sf::Event &event)
{
    m_HUD.handleInput(event);
}

void MenuState::draw(sf::RenderWindow *window)
{
    m_HUD.draw(window);
}
