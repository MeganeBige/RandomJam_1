#ifndef RANDOMJAM_INPUTHANDLER_HPP
#define RANDOMJAM_INPUTHANDLER_HPP

#include <vector>
#include <iostream>
#include <SFML/Graphics.hpp>

#include "Interface/VisualObject.hpp"

class InputHandler
{
public:
    explicit InputHandler(bool debug);
    virtual ~InputHandler();

    void handleInput(sf::Event &e, VisualObject *o, bool mouseLock);

    std::string getComponentId();
    std::string getOverId();
    int getKeyCode();

private:
    bool m_debug;
    bool m_mouseState;
    bool m_mouseLock;
    std::string m_pressedId;
    std::string m_overId;
    int m_keyCode;

    void mouseReleaseHandle(sf::Event *e);
    void mousePressedHandle(sf::Event *e, VisualObject *o);
    void mouseLeftHandle(sf::Event *e, VisualObject *o);
    void mouseMovedHandle(sf::Event *e, VisualObject *o);
    void textEnteredHandle(sf::Event *e, VisualObject *o);
};

#endif //RANDOMJAM_INPUTHANDLER_HPP
