#ifndef RANDOMJAM_PAUSESTATE_HPP
#define RANDOMJAM_PAUSESTATE_HPP

#include "Utils/Singleton.hpp"
#include "HUD/PauseHUD.hpp"
#include "GameState/StateMachine.hpp"

class PauseState : public State, public InputHandler, public Singleton<PauseState>
{
public:
    explicit PauseState();
    virtual ~PauseState();

    void init();
    virtual bool onEnter();
    virtual bool onExit();
    virtual void update(double time);
    virtual void onPollEvent(sf::Event &event);
    virtual void draw(sf::RenderWindow *window);

private:
    PauseHUD m_HUD;
};

#endif //RANDOMJAM_PAUSESTATE_HPP
