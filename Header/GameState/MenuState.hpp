#ifndef RANDOMJAM_MENUSTATE_HPP
#define RANDOMJAM_MENUSTATE_HPP

#include "Utils/Singleton.hpp"
#include "HUD/MenuHUD.hpp"
#include "GameState/StateMachine.hpp"

class MenuState : public State, public InputHandler, public Singleton<MenuState>
{
public:
    explicit MenuState();
    virtual ~MenuState();

    void init();
    virtual bool onEnter();
    virtual bool onExit();
    virtual void update(double time);
    virtual void onPollEvent(sf::Event &event);
    virtual void draw(sf::RenderWindow *window);

private:
    MenuHUD m_HUD;
};

#endif //RANDOMJAM_MENUSTATE_HPP
