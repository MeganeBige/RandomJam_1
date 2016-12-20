#include "Interface/NButton.hpp"

NButton::NButton():
    VisualObject(),
    m_actionId((unsigned int) -1),
    m_ptr_triggObject(nullptr),
    m_surrounder()
{
    // Empty
}

NButton::~NButton()
{
    // Empty
}

void NButton::create(std::string id, int x, int y, sf::Texture *texture_1, sf::Texture *texture_2)
{
    m_actionId = (unsigned int) -1;
    m_ptr_triggObject = nullptr;

    init(id, x, y, texture_1);

    m_secondSprite.setTexture(*texture_2);
    m_secondSprite.setPosition(m_position);

    m_surrounder.init(m_mainSprite.getPosition(), m_mainSprite.getTexture()->getSize(), sf::Color::Red);
}

void NButton::draw(sf::RenderWindow *window)
{
    if (m_hidden)
        return;

    if (m_isActive)
        window->draw(m_secondSprite);
    else if (m_isOver)
    {
        window->draw(m_mainSprite);
        window->draw(*m_surrounder.getShape());
    }
    else
        window->draw(m_mainSprite);
}

void NButton::bind(TriggerableObject *o)
{
    m_ptr_triggObject = o;
}

std::string NButton::eventMousePressed(sf::Event *e)
{
    std::string id = "NULL";
    if (!m_isEnable)
        return id;

    sf::FloatRect mousePosition(e->mouseButton.x, e->mouseButton.y, 1, 1);

    if (m_mainSprite.getGlobalBounds().intersects(mousePosition))
    {
        id = m_id;
        m_isActive = true;

        if ((int)m_actionId != -1 && m_ptr_triggObject != nullptr)
            m_ptr_triggObject->trigger(m_actionId, m_textList);
    }

    return id;
}

std::string NButton::eventMouseMoved(sf::Event *e)
{
    std::string id = "NULL";
    if (!m_isEnable)
        return id;

    sf::FloatRect mousePosition(e->mouseButton.x, e->mouseButton.y, 1, 1);

    if (m_mainSprite.getGlobalBounds().intersects(mousePosition))
    {
        id = m_id;
        m_isOver = true;
    }
    else
        m_isOver = false;

    return id;
}

void NButton::eventTextEntered(sf::Event *e)
{
    if (!m_isEnable)
        return;
    (void)e;
}

void NButton::update(double time)
{
    if (m_isActive)
        m_timeElapsed += time;

    if (m_timeElapsed > BUTTON_DELAY)
    {
        m_isActive = false;
        m_timeElapsed = 0;
    }
}

void NButton::setSprite(sf::Texture *texture_1, sf::Texture *texture_2)
{
    m_mainSprite.setTexture(*texture_1);
    m_secondSprite.setTexture(*texture_2);
}

void NButton::setPosition(float x, float y)
{
    m_position.x = x;
    m_position.y = y;
    m_mainSprite.setPosition(m_position);
    m_secondSprite.setPosition(m_position);

    m_surrounder.setPosition(x, y);
}

void NButton::setActionId(unsigned int id)
{
    m_actionId = id;
}