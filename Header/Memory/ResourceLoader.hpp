#ifndef RANDOMJAM_RESOURCELOADER_HPP
#define RANDOMJAM_RESOURCELOADER_HPP

void LoadAll();
std::string buildPath(std::string const& base, std::string const& path, std::string const& name);
void LoadTexture(std::string const& key, std::string const& path);
void LoadMusic(std::string const& key, std::string const& path);
void LoadFont(std::string const& key, std::string const& path);

#endif //RANDOMJAM_RESOURCELOADER_HPP
