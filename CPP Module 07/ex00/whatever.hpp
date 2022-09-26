#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
const T& max(const T& left, const T& right)
{
    if (left > right)
        return (left);
    return (right);
}

template<typename T>
const T& min(const T& left, const T& right)
{
    if (left > right)
        return (right);
    return (left);
}

#endif