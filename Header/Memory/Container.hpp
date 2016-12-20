#ifndef RANDOMJAM_CONTAINER_HPP
#define RANDOMJAM_CONTAINER_HPP

#include <string>
#include <unordered_map>

#include "Utils/Singleton.hpp"

template <typename T>
class Container : public Singleton <Container <T>>
{
public:
    explicit Container();
    virtual ~Container();

    T *GetResource(const std::string &key);
    T *LoadResource(const std::string &key);
    void UnloadResource(const std::string &key);

private:
    typename std::unordered_map <std::string, T*> ::iterator m_iterator;
    std::unordered_map <std::string, T*> m_resources;

    bool CheckKey(const std::string &key);
};

#include "Memory/Container.inl"

#endif //RANDOMJAM_CONTAINER_HPP
