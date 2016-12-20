#ifndef RANDOMJAM_NTEXTFIELD_HPP
#define RANDOMJAM_NTEXTFIELD_HPP

#include <vector>

#include "Interface/VisualObject.hpp"

class NTextField : public VisualObject
{
public:
    explicit NTextField();
    virtual ~NTextField();

    void create(std::string id, int x, int y, sf::Texture *texture_1, sf::Texture *texture_2, sf::Font *ptr_font,
                int fontSize, float flashingDelay, std::string const& text, int maxSize, sf::Color color);
    virtual void draw(sf::RenderWindow *window);
    virtual std::string eventMousePressed(sf::Event *e);
    virtual std::string eventMouseMoved(sf::Event *e);
    virtual void eventTextEntered(sf::Event *e);
    virtual void update(double time);
    virtual void setSprite(sf::Texture *texture_1, sf::Texture *texture_2);
    virtual void setPosition(float x, float y);

    std::string const& getString();

private:
    sf::Sprite m_secondSprite;
    sf::Text m_text;
    float m_flashingDelay;
    bool m_isFlashed;
    int m_maxSize;
    int m_fontSize;
    sf::Vector2f m_cursorPosition;
    std::string m_charList;
};

#endif //RANDOMJAM_NTEXTFIELD_HPP
