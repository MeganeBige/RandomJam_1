#ifndef RANDOMJAM_NBUTTON_HPP
#define RANDOMJAM_NBUTTON_HPP

#include <iostream>

#include "Interface/VisualObject.hpp"
#include "Interface/Surrounder.hpp"

class NButton : public VisualObject
{
public:
    explicit NButton();
    virtual ~NButton();

    void create(std::string id, int x, int y, sf::Texture *texture_1, sf::Texture *texture_2);
    virtual void draw(sf::RenderWindow *window);
    virtual void bind(TriggerableObject *o);
    virtual std::string eventMousePressed(sf::Event *e);
    virtual std::string eventMouseMoved(sf::Event *e);
    virtual void eventTextEntered(sf::Event *e);
    virtual void update(double time);

    virtual void setSprite(sf::Texture *texture_1, sf::Texture *texture_2);
    virtual void setPosition(float x, float y);
    void setActionId(unsigned int id);

private:
    unsigned int m_actionId;
    TriggerableObject *m_ptr_triggObject;
    sf::Sprite m_secondSprite;
    Surrounder m_surrounder;
    std::vector<std::string> m_textList;
};

#endif //RANDOMJAM_NBUTTON_HPP
