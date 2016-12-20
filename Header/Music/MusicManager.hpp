#ifndef RANDOMJAM_MUSICMANAGER_HPP
#define RANDOMJAM_MUSICMANAGER_HPP

#include <SFML/Audio.hpp>

#include "Utils/Singleton.hpp"
#include "Utils/Updatable.hpp"
#include "Constant.hpp"

class MusicManager : public Updatable, public Singleton<MusicManager>
{
public:
    explicit MusicManager();
    virtual ~MusicManager();

    virtual void update(double time);
    void playNext(double time, std::string const& next);
    void pauseCurrent();

    void setCurrent(std::string const& key);

private:
    double m_fade;
    double m_timeElapsed;
    double m_attenuation;

    sf::Music *m_current;
    sf::Music *m_next;

    bool m_fadeOut;
    bool m_fadeIn;
    bool m_pause;
};

#endif //RANDOMJAM_MUSICMANAGER_HPP
