#include "GameState/GameOverState.hpp"

GameOverState::GameOverState():
        InputHandler(LD_DEBUG),
        m_HUD(LD_DEBUG, this)
{
    // Empty
}

GameOverState::~GameOverState()
{
    // Empty
}

void GameOverState::init()
{
    // Empty
}

bool GameOverState::onEnter()
{
    return true;
}

bool GameOverState::onExit()
{
    return true;
}

void GameOverState::update(double time)
{
    m_HUD.update(time);
}

void GameOverState::onPollEvent(sf::Event &event)
{
    m_HUD.handleInput(event);
}

void GameOverState::draw(sf::RenderWindow *window)
{
    m_HUD.draw(window);
}
