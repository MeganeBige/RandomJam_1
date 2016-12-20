#ifndef RANDOMJAM_PATCH_HPP
#define RANDOMJAM_PATCH_HPP

#include <sstream>

namespace fix
{
    template <typename T>
    std::string to_string(T value)
    {
        std::ostringstream os;
        os << value;
        return os.str();
    }
}

#endif //RANDOMJAM_PATCH_HPP
