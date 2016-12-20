#include "GameState/BattleState.hpp"

BattleState::BattleState():
        InputHandler(LD_DEBUG),
        m_HUD(LD_DEBUG, this),
        m_map(18,10)
{
    // Empty
}

BattleState::~BattleState()
{
    // Empty
}

void BattleState::init()
{
    m_map.init();
}

bool BattleState::onEnter()
{
    return true;
}

bool BattleState::onExit()
{
    return true;
}

void BattleState::update(double time)
{
    m_HUD.update(time);
}

void BattleState::onPollEvent(sf::Event &event)
{
    m_HUD.handleInput(event);
}

void BattleState::draw(sf::RenderWindow *window)
{
    sf::View view(sf::FloatRect(200, 200, 300, 200));
    window->setView(view);
    m_map.draw(window);
    m_HUD.draw(window);
}
