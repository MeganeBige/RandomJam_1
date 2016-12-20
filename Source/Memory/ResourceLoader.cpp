#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "Memory/Container.hpp"
#include "Memory/ResourceLoader.hpp"

#define MAP_PATH ("Images/Map/")

#ifdef MVS
    #define RES_PATH ("../RandomJam_1/Resource/")
#else
    #define RES_PATH ("../Resource/")
#endif

void LoadAll()
{
    // Loading Texture
    LoadTexture("STANDARD_TILE", buildPath(RES_PATH, MAP_PATH, "Standard_Tile.png"));

    // Loading Music

    // Loading Font

}

std::string buildPath(std::string const& base, std::string const& path, std::string const& name)
{
    return base + path + name;
}

void LoadTexture(std::string const& key, std::string const& path)
{
    Container<sf::Texture> *p_TContainer = Container<sf::Texture>::Instance();
    sf::Texture *texture = p_TContainer->LoadResource(key);

    if (nullptr == texture)
        return;

    if (!texture->loadFromFile(path))
        std::cerr << StaticString::STATIC_FAILURE_FNF << std::endl;
}

void LoadMusic(std::string const& key, std::string const& path)
{
    Container<sf::Music> *p_MContainer = Container<sf::Music>::Instance();
    sf::Music *music = p_MContainer->LoadResource(key);

    if (nullptr == music)
        return;

    if (!music->openFromFile(path))
        std::cerr << StaticString::STATIC_FAILURE_FNF << std::endl;
}

void LoadFont(std::string const& key, std::string const& path)
{
    Container<sf::Font> *p_FContainer = Container<sf::Font>::Instance();
    sf::Font *font = p_FContainer->LoadResource(key);

    if (nullptr == font)
        return;

    if (!font->loadFromFile(path))
        std::cerr << StaticString::STATIC_FAILURE_FNF << std::endl;
}
