#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int needle)
{
    typename T::iterator it = std::find(container.begin(), container.end(), needle);
    return (it);
}

#endif