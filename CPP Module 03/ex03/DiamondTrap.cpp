#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
{
    this->name = "DiamondTrap";
    this->ClapTrap::name = std::string("DiamondTrap").append("_clap_name");
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

    std::cout << this->name << " DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    this->ClapTrap::name = name.append("_clap_name");
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

    std::cout << this->name << " DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    *this = other;

    std::cout << this->name << " DiamondTrap copy created" << std::endl;
}

DiamondTrap::~DiamondTrap() { std::cout << this->name << " DiamondTrap destroyed" << std::endl; }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    this->ClapTrap::name = other.ClapTrap::name;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << this->name << " DiamondTrap = " << other.name << std::endl;

    return (*this);
}

void DiamondTrap::attack(const std::string& target) { this->ScavTrap::attack(target); }

void DiamondTrap::whoAmI() const
{
    std::cout << "I am " << this->name << ", my ClapTrap name is " << this->ClapTrap::name << std::endl;
}