#ifndef RANDOMJAM_GAMEOVERSTATE_HPP
#define RANDOMJAM_GAMEOVERSTATE_HPP

#include "Utils/Singleton.hpp"
#include "HUD/GameOverHUD.hpp"
#include "GameState/StateMachine.hpp"

class GameOverState : public State, public InputHandler, public Singleton<GameOverState>
{
public:
    explicit GameOverState();
    virtual ~GameOverState();

    void init();
    virtual bool onEnter();
    virtual bool onExit();
    virtual void update(double time);
    virtual void onPollEvent(sf::Event &event);
    virtual void draw(sf::RenderWindow *window);

private:
    GameOverHUD m_HUD;
};

#endif //RANDOMJAM_GAMEOVERSTATE_HPP
