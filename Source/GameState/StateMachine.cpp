#include "GameState/StateMachine.hpp"

StateMachine::StateMachine()
{
    // Empty
}

StateMachine::~StateMachine()
{
    // Empty
}

void StateMachine::update(double time)
{
    if (!m_gamesStates.empty())
        m_gamesStates.back()->update(time);
}

void StateMachine::onPollEvent(sf::Event &event)
{
    if (!m_gamesStates.empty())
        m_gamesStates.back()->onPollEvent(event);
}

void StateMachine::draw(sf::RenderWindow *window)
{
    if (!m_gamesStates.empty())
        m_gamesStates.back()->draw(window);
}

void StateMachine::pushState(State *pState)
{
    m_gamesStates.push_back(pState);
    m_gamesStates.back()->onEnter();
}

void StateMachine::changeState(State *pState)
{
    popState();
    pushState(pState);
}

void StateMachine::popState()
{
    if (!m_gamesStates.empty())
        if (m_gamesStates.back()->onExit())
            m_gamesStates.pop_back();
}

bool StateMachine::isEmpty()
{
    return m_gamesStates.size() == 0;
}

void StateMachine::exit()
{
    m_gamesStates.clear();
}