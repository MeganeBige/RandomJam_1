#include "Music/MusicManager.hpp"
#include "Memory/Container.hpp"

MusicManager::MusicManager():
    m_fade(0),
    m_timeElapsed(0),
    m_attenuation(0),
    m_current(nullptr),
    m_next(nullptr),
    m_fadeOut(false),
    m_fadeIn(false),
    m_pause(false)
{
    // Empty
}

MusicManager::~MusicManager()
{
    // Empty
}

void MusicManager::update(double time)
{
    m_timeElapsed += time;

    if (m_fadeOut)
    {
        m_current->setVolume(m_current->getVolume() - (float)(m_attenuation * time));

        if (m_timeElapsed >= m_fade)
        {
            m_fadeIn = true;
            m_fadeOut = false;
            m_current->stop();

            m_timeElapsed = 0;
            if (m_next != nullptr)
            {
                m_current = m_next;
                m_next = nullptr;
            }
            m_current->setVolume(0);
            m_current->setLoop(true);
            m_current->play();
        }
    }

    if (m_fadeIn)
    {
        m_current->setVolume(m_current->getVolume() + (float)(m_attenuation * time));

        if (m_timeElapsed >= m_fade)
        {
            m_fadeIn = false;
            m_timeElapsed = 0;
        }
    }
}


void MusicManager::playNext(double time, std::string const &next)
{
    m_next = Container<sf::Music>::Instance()->GetResource(next);

    m_fade = time;
    m_timeElapsed = 0;

    if (m_current == nullptr)
    {
        m_current = m_next;
        m_fadeOut = false;
        m_fadeIn = true;

        m_current->setVolume(50);
        m_attenuation = m_current->getVolume() / m_fade;
        m_current->setVolume(0);
        m_current->play();
    }
    else
    {
        m_fadeOut = true;
        m_current->setVolume(50);
        m_attenuation = m_current->getVolume() / m_fade;
    }
}

void MusicManager::pauseCurrent()
{
    if (m_current != nullptr)
    {
        if (!m_pause)
        {
            m_current->pause();
            m_pause = true;
        }
        else
        {
            m_current->play();
            m_pause = false;
        }
    }
}

void MusicManager::setCurrent(std::string const &key)
{
    m_current = Container<sf::Music>::Instance()->GetResource(key);
}