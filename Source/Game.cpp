#include "Game.hpp"
#include "Memory/ResourceLoader.hpp"
#include "GameState/BattleState.hpp"
#include "Music/MusicManager.hpp"

Game::Game():
    m_window(sf::VideoMode(1280, 720), "RandomJam 1")
{
    // Empty
}

void Game::init()
{
    time_t *t = new time_t();
    srand((unsigned)time(t));

    LoadAll();

    StateMachine::Instance()->window = &m_window;
    BattleState::Instance()->init();
    StateMachine::Instance()->pushState(BattleState::Instance());

    m_window.setFramerateLimit(60);
}

void Game::gameLoop(double time)
{
    handleInput();

    MusicManager::Instance()->update(time);
    StateMachine::Instance()->update(time);

    draw();
}

void Game::handleInput()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            m_window.close();
        }

        StateMachine::Instance()->onPollEvent(event);
    }

    if (StateMachine::Instance()->isEmpty())
        m_window.close();
}

void Game::draw()
{
    m_window.clear();

    StateMachine::Instance()->draw(&m_window);

    m_window.display();
}

bool Game::windowsIsOpen() const
{
    return m_window.isOpen();
}