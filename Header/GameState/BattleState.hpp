#ifndef RANDOMJAM_BATTLESTATE_HPP
#define RANDOMJAM_BATTLESTATE_HPP

#include "Utils/Singleton.hpp"
#include "HUD/BattleHUD.hpp"
#include "Map/Map.hpp"
#include "GameState/StateMachine.hpp"

class BattleState : public State, public InputHandler, public Singleton<BattleState>
{
public:
    explicit BattleState();
    virtual ~BattleState();

    void init();
    virtual bool onEnter();
    virtual bool onExit();
    virtual void update(double time);
    virtual void onPollEvent(sf::Event &event);
    virtual void draw(sf::RenderWindow *window);

private:
    BattleHUD m_HUD;
    Map m_map;
};

#endif //RANDOMJAM_BATTLESTATE_HPP
