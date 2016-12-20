#ifndef RANDOMJAM_STATICSTRING_HPP
#define RANDOMJAM_STATICSTRING_HPP

class StaticString
{
public:
    using CSTR = const char *;

    static constexpr CSTR STATIC_FAILURE_CKNF = "[error] Unable to find the key in the container";
    static constexpr CSTR STATIC_FAILURE_CKAE = "[error] The key already exists in the container";
    static constexpr CSTR STATIC_FAILURE_FNF  = "[error] Unable to load resource, file not found";
};

#endif //RANDOMJAM_STATICSTRING_HPP
