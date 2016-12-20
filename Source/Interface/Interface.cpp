#include "Interface/Interface.hpp"

Interface::Interface(bool debug, InputHandler *inputHandler):
    m_debug(debug),
    m_optionActive(false),
    m_inputHandler(inputHandler),
    m_contentPane()
{
    m_Interfaces.push_back(&m_contentPane);
}

Interface::~Interface()
{
    // Empty
}

void Interface::draw(sf::RenderWindow *window)
{
    for (unsigned int i = 0; i < m_Interfaces.size(); i++)
        m_Interfaces[i]->draw(window);
}

void Interface::update(double time)
{
    updateInterfaces(time);
}

void Interface::handleInput(sf::Event &event)
{
    m_inputHandler->handleInput(event, &m_contentPane, false);
}

NPanel* Interface::getContentPane()
{
    return &m_contentPane;
}

void Interface::setContentPane(NPanel *pane)
{
    m_contentPane = *pane;
}

void Interface::updateInterfaces(double time)
{
    for (unsigned int i = 0; i < m_Interfaces.size(); i++)
        m_Interfaces[i]->update(time);
}