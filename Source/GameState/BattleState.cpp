#include "GameState/BattleState.hpp"

BattleState::BattleState():
        InputHandler(LD_DEBUG),
        m_mapView(),
        m_HUDView(),
        m_HUD(LD_DEBUG, this),
        m_map(18,10)
{
    // Empty
}

BattleState::~BattleState()
{
    // Empty
}

void BattleState::init(sf::RenderWindow *window)
{
    m_HUDView = window->getDefaultView();
    m_mapView.setSize(sf::Vector2f(WINDOW_LENGTH, WINDOW_WIDTH));
    m_mapView.setCenter(sf::Vector2f(WINDOW_LENGTH/2 - (WINDOW_LENGTH - 18 * TILE_SIZE)/2,
                                  WINDOW_WIDTH/2 - (WINDOW_WIDTH - 10 * TILE_SIZE)/2));
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
    window->setView(m_mapView);
    m_map.draw(window);
    window->setView(m_HUDView);
    m_HUD.draw(window);
}
