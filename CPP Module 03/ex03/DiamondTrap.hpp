#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& other);
    ~DiamondTrap();

    DiamondTrap& operator=(const DiamondTrap& other);

    void attack(const std::string& target);
    void whoAmI() const;

private:
    std::string name;
};

#endif