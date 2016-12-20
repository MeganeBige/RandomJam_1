#ifndef RANDOMJAM_TRIGGERABLEOBJECT_HPP
#define RANDOMJAM_TRIGGERABLEOBJECT_HPP

#include <string>
#include <vector>

class TriggerableObject
{
    using usint = unsigned short int;

public:
    explicit TriggerableObject();
    virtual ~TriggerableObject();

    virtual void trigger(usint id) = 0;
    virtual void trigger(usint id, std::vector<std::string> v) = 0;
};

#endif //RANDOMJAM_TRIGGERABLEOBJECT_HPP
