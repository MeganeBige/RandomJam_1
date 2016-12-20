#ifndef RANDOMJAM_CAMPSTATE_HPP
#define RANDOMJAM_CAMPSTATE_HPP

#include "Utils/Singleton.hpp"
#include "HUD/CampHUD.hpp"
#include "GameState/StateMachine.hpp"

class CampState : public State, public InputHandler, public Singleton<CampState>
{
public:
    explicit CampState();
    virtual ~CampState();

    void init();
    virtual bool onEnter();
    virtual bool onExit();
    virtual void update(double time);
    virtual void onPollEvent(sf::Event &event);
    virtual void draw(sf::RenderWindow *window);

private:
    CampHUD m_HUD;
};

#endif //RANDOMJAM_CAMPSTATE_HPP
