#ifndef RANDOMJAM_NPANEL_HPP
#define RANDOMJAM_NPANEL_HPP

#include <vector>

#include "Interface/VisualObject.hpp"

class NPanel : public VisualObject
{
public:
    explicit NPanel();
    virtual ~NPanel();

    void create(std::string id, int x, int y, sf::Texture *texture = NULL);
    virtual void draw(sf::RenderWindow *window);
    virtual std::string eventMousePressed(sf::Event *e);
    virtual std::string eventMouseMoved(sf::Event *e);
    virtual void eventTextEntered(sf::Event *e);
    virtual void update(double time);

    void addComponent(VisualObject *component);
    void removeLastComponent();
    void removeComponent(VisualObject *component);
    int getNumberOfComponents();
    VisualObject *getLastComponent();

    VisualObject *getComponent(VisualObject *component);

private:
    std::vector<VisualObject *> m_vObjectList;
    bool m_isTextured;
};

#endif //RANDOMJAM_NPANEL_HPP
