#include "Interface/NPanel.hpp"

NPanel::NPanel():
    VisualObject(),
    m_isTextured(false)
{
    // Empty
}

NPanel::~NPanel()
{
    // Empty
}

void NPanel::create(std::string id, int x, int y, sf::Texture *texture)
{
    if (texture != NULL)
        m_isTextured = true;

    init(id, x, y, texture);
}

void NPanel::draw(sf::RenderWindow *window)
{
    if (m_hidden)
        return;

    if (m_isTextured)
        window->draw(m_mainSprite);

    for (unsigned int i = 0; m_vObjectList.size(); i++)
    {
        m_vObjectList[i]->draw(window);
    }
}

std::string NPanel::eventMousePressed(sf::Event *e)
{
    std::string id = "NULL";

    if (m_hidden)
        return id;

    for (unsigned int i = 0; i < m_vObjectList.size(); i++)
    {
        id = m_vObjectList[i]->eventMousePressed(e);
        if (id != "NULL")
            return id;
    }

    return id;
}

std::string NPanel::eventMouseMoved(sf::Event *e)
{
    std::string id = "NULL";

    if (m_hidden)
        return id;

    for (unsigned int i = 0; i < m_vObjectList.size(); i++)
    {
        id = m_vObjectList[i]->eventMouseMoved(e);
        if (id != "NULL")
            return id;
    }

    return id;
}

void NPanel::eventTextEntered(sf::Event *e)
{
    if (m_hidden)
        return;

    for (unsigned int i = 0; i < m_vObjectList.size(); i++)
        m_vObjectList[i]->eventTextEntered(e);
}

void NPanel::update(double time)
{
    for (unsigned int i = 0; i < m_vObjectList.size(); i++)
        m_vObjectList[i]->update(time);
}

void NPanel::addComponent(VisualObject *component)
{
    m_vObjectList.push_back(component);
}

void NPanel::removeLastComponent()
{
    m_vObjectList.pop_back();
}

void NPanel::removeComponent(VisualObject *component)
{
    for (unsigned int i = 0; i < m_vObjectList.size(); i++)
    {
        if (component == m_vObjectList[i])
        {
            m_vObjectList.erase(m_vObjectList.begin() + i);
            break;
        }
    }
}

int NPanel::getNumberOfComponents()
{
    return (int) m_vObjectList.size();
}

VisualObject* NPanel::getLastComponent()
{
    return m_vObjectList.back();
}

VisualObject* NPanel::getComponent(VisualObject *component)
{
    for (unsigned int i = 0; i < m_vObjectList.size(); i++)
        if (component == m_vObjectList[i])
            return m_vObjectList[i];

    return nullptr;
}