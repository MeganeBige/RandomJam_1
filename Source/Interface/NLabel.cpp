#include "Interface/NLabel.hpp"

NLabel::NLabel():
    VisualObject(),
    m_text()
{
    // Empty
}

NLabel::~NLabel()
{
    // Empty
}

void NLabel::create(std::string id, int x, int y, int size, sf::Font *ptr_font, std::string text, sf::Color color)
{
    m_ptr_font = ptr_font;
    m_id = id;
    m_position.x = x;
    m_position.y = y;

    m_text.setFont(*ptr_font);
    m_text.setString(text);
    m_text.setCharacterSize((unsigned int) size);
    m_text.setPosition(m_position);
    m_text.setFillColor(color);
}

void NLabel::draw(sf::RenderWindow *window)
{
    if (m_hidden)
        return;

    window->draw(m_text);
}

std::string NLabel::eventMousePressed(sf::Event *e)
{
    (void)e;
    return "NULL";
}

std::string NLabel::eventMouseMoved(sf::Event *e)
{
    (void)e;
    return "NULL";
}

void NLabel::eventTextEntered(sf::Event *e)
{
    (void)e;
}

void NLabel::update(double time)
{
    (void)time;
}

void NLabel::setPosition(float x, float y)
{
    m_position.x = x;
    m_position.y = y;
    m_text.setPosition(m_position);
}

void NLabel::setText(std::wstring const &text)
{
    m_text.setString(text);
}

void NLabel::setText(std::string const &text)
{
    m_text.setString(text);
}