#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <string>

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    virtual ~FragTrap();

    FragTrap& operator=(const FragTrap& other);

    void highFivesGuys();
};

#endif