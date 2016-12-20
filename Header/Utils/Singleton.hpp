#ifndef RANDOMJAM_SINGLETON_HPP
#define RANDOMJAM_SINGLETON_HPP

template <typename T>
class Singleton
{
public:
    static T *Instance()
    {
        if (m_instance == nullptr)
            m_instance = new T();

        return m_instance;
    }

protected:
    static T *m_instance;
    Singleton() {};
};

template <typename T> T *Singleton<T>::m_instance = nullptr;

#endif //RANDOMJAM_SINGLETON_HPP
