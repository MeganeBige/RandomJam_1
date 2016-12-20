#ifndef RANDOMJAM_STATEMACHINE_HPP
#define RANDOMJAM_STATEMACHINE_HPP

#include <vector>

#include "Utils/Singleton.hpp"
#include "Utils/Updatable.hpp"
#include "Utils/Drawable.hpp"
#include "GameState/State.hpp"

class StateMachine : public Updatable, public Drawable, public Singleton<StateMachine>
{
public:
    explicit StateMachine();
    virtual ~StateMachine();

    virtual void update(double time);
    void onPollEvent(sf::Event &event);
    virtual void draw(sf::RenderWindow *window);
    void pushState(State *pState);
    void changeState(State *pState);
    void popState();
    bool isEmpty();
    void exit();

    sf::Window *window;

private:
    std::vector<State*> m_gamesStates;
};

#endif //RANDOMJAM_STATEMACHINE_HPP
