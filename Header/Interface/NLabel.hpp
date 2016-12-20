#ifndef RANDOMJAM_NLABEL_HPP
#define RANDOMJAM_NLABEL_HPP

#include "Interface/VisualObject.hpp"

class NLabel : public VisualObject
{
public:
    explicit NLabel();
    virtual ~NLabel();

    void create(std::string id, int x, int y, int size, sf::Font *ptr_font, std::string text, sf::Color color);
    virtual void draw(sf::RenderWindow *window);
    virtual std::string eventMousePressed(sf::Event *e);
    virtual std::string eventMouseMoved(sf::Event *e);
    virtual void eventTextEntered(sf::Event *e);
    virtual void update(double time);
    virtual void setPosition(float x, float y);

    void setText(std::wstring const &text);
    void setText(std::string const &text);

private:
    sf::Font *m_ptr_font;
    sf::Text m_text;
};

#endif //RANDOMJAM_NLABEL_HPP
