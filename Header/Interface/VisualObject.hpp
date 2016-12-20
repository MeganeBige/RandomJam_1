#ifndef RANDOMJAM_VISUALOBJECT_HPP
#define RANDOMJAM_VISUALOBJECT_HPP

#include <string>
#include <SFML/Graphics.hpp>

#include "Constant.hpp"
#include "Interface/TriggerableObject.hpp"
#include "Utils/Updatable.hpp"
#include "Utils/Drawable.hpp"

class VisualObject : public Updatable, public Drawable
{
public:
    explicit VisualObject();
    virtual ~VisualObject();

    virtual void draw(sf::RenderWindow *window);
    virtual void bind(TriggerableObject *o);
    virtual void init(std::string id, int x, int y, sf::Texture *texture);
    virtual std::string eventMousePressed(sf::Event *e) = 0;
    virtual std::string eventMouseMoved(sf::Event *e) = 0;
    virtual void eventTextEntered(sf::Event *e) = 0;
    virtual void update(double time) = 0;

    std::string getId();
    sf::Sprite *getSprite();
    sf::Vector2f *getPosition();

    void setId(const std::string &id);
    void setSprite(sf::Texture *texture);
    void setPosition(float x, float y);
    void setVisible(bool state);
    void setEnable(bool state);

protected:
    bool m_hidden;
    bool m_isActive;
    bool m_isOver;
    bool m_isEnable;
    double m_timeElapsed;

    std::string m_id;
    sf::Sprite m_mainSprite;
    sf::Vector2f m_position;
};

#endif //RANDOMJAM_VISUALOBJECT_HPP
