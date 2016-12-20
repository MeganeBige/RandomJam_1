#ifndef RANDOMJAM_ANIMATABLEOBJECT_HPP
#define RANDOMJAM_ANIMATABLEOBJECT_HPP

#include <iostream>

#include "Interface/VisualObject.hpp"

class AnimatableObject : public VisualObject
{
    enum AnimationState
    {
        PLAY,
        PAUSE,
        STOP
    };

public:
    explicit AnimatableObject();
    virtual ~AnimatableObject();

    void create(std::string id, int x, int y, sf::Texture *texture, bool repeat,
                float duration, int h, int w, int step);
    virtual void draw(sf::RenderWindow *window);
    virtual std::string eventMousePressed(sf::Event *e);
    virtual std::string eventMouseMoved(sf::Event *e);
    virtual void eventTextEntered(sf::Event *e);
    virtual void update(double time);

    void start();
    void pause();
    void stop();

private:
    float m_animDuration;
    bool m_repeat;
    int m_length;
    int m_currentStep;
    int m_frameHeight;
    int m_frameWidth;

    AnimationState m_state;
};

#endif //RANDOMJAM_ANIMATABLEOBJECT_HPP
