#include "Interface/InputHandler.hpp"

InputHandler::InputHandler(bool debug):
    m_debug(debug),
    m_mouseLock(true)
{
    // Empty
}

InputHandler::~InputHandler()
{
    // Empty
}

void InputHandler::handleInput(sf::Event &e, VisualObject *o, bool mouseLock)
{
    m_mouseLock = mouseLock;

    switch (e.type)
    {
        case sf::Event::MouseButtonPressed:
            mousePressedHandle(&e, o);
            break;

        case sf::Event::MouseButtonReleased:
            mouseReleaseHandle(&e);
            break;

        case sf::Event::MouseMoved:
            mouseMovedHandle(&e, o);
            break;

        case sf::Event::TextEntered:
            textEnteredHandle(&e, o);
            break;

        default:
            m_overId = "NULL";
            m_keyCode = -1;
            m_pressedId = "NULL";
            break;
    }
}

void InputHandler::mousePressedHandle(sf::Event *e, VisualObject *o)
{
    switch (e->mouseButton.button)
    {
        case sf::Mouse::Left:
            mouseLeftHandle(e, o);
            break;

        case sf::Mouse::Right:
            // Empty
            break;

        default:
            // Empty
            break;
    }
}

void InputHandler::mouseReleaseHandle(sf::Event *e)
{
    if (e->mouseButton.button == sf::Mouse::Left)
    {
        m_mouseState = false;
        m_overId = "NULL";
        m_keyCode = -1;
        m_pressedId = "NULL";
    }
}

void InputHandler::mouseLeftHandle(sf::Event *e, VisualObject *o)
{
    m_overId = "NULL";
    m_keyCode = -1;

    m_pressedId = "NULL";

    if (!m_mouseState)
    {
        m_mouseState = true;
        m_pressedId = o->eventMousePressed(e);

        if (m_debug)
        {
            std::cout << "- Event ID : mousePressed" << std::endl;
            std::cout << "- Compo ID : " << m_pressedId << std::endl;
            std::cout << "- Mouse x  : " << e->mouseButton.x << std::endl;
            std::cout << "- Mouse y  : " << e->mouseButton.y << std::endl;
        }
    }
}

void InputHandler::mouseMovedHandle(sf::Event *e, VisualObject *o)
{
    m_pressedId = "NULL";
    m_keyCode = -1;

    m_overId = "NULL";
    m_overId = o->eventMouseMoved(e);
}

void InputHandler::textEnteredHandle(sf::Event *e, VisualObject *o)
{
    m_overId = "NULL";
    m_pressedId = "NULL";

    m_keyCode = e->text.unicode;
    o->eventTextEntered(e);

    if (m_debug)
    {
        std::cout << "- Event ID : textEntered" << std::endl;
        std::cout << "- Key Code : " << m_keyCode << std::endl;
    }
}

std::string InputHandler::getComponentId()
{
    return m_pressedId;
}

std::string InputHandler::getOverId()
{
    return m_overId;
}

int InputHandler::getKeyCode()
{
    return m_keyCode;
}