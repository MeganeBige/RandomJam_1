#include "Interface/AnimatableObject.hpp"

AnimatableObject::AnimatableObject()
{
    // Empty
}

AnimatableObject::~AnimatableObject()
{
    // Empty
}

void AnimatableObject::create(std::string id, int x, int y, sf::Texture *texture,
                              bool repeat, float duration, int h, int w, int step)
{
    init(id, x, y, texture);

    m_animDuration = duration;
    m_repeat = repeat;
    m_frameHeight = h;
    m_frameWidth = w;
    m_length = step;
    m_currentStep = 0;

    m_state = AnimationState ::PLAY;

    m_mainSprite.setTextureRect(sf::IntRect(0, 0, m_frameWidth, m_frameHeight));
}

void AnimatableObject::draw(sf::RenderWindow *window)
{
    if (m_hidden)
        return;

    window->draw(m_mainSprite);
}

std::string AnimatableObject::eventMousePressed(sf::Event *e)
{
    (void)e;
    return "NULL";
}

std::string AnimatableObject::eventMouseMoved(sf::Event *e)
{
    (void)e;
    return "NULL";
}

void AnimatableObject::eventTextEntered(sf::Event *e)
{
    (void)e;
}

void AnimatableObject::update(double time)
{
    if (m_state == AnimationState::PLAY)
    {
        m_timeElapsed += time;

        if (m_timeElapsed >= m_animDuration)
        {
            m_timeElapsed = 0;

            if (m_currentStep + 1 >= m_length)
            {
                if (m_repeat)
                    m_currentStep = 0;
                else
                    m_state = AnimationState ::STOP;
            }
            else
                m_currentStep++;

            m_mainSprite.setTextureRect(sf::IntRect(m_currentStep * m_frameWidth,
                                                    0, m_frameWidth, m_frameHeight));
        }
    }
}