#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap()
{
    this->name = "ScavTrap";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << this->name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << this->name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    *this = other;

    std::cout << this->name << " ScavTrap copy created" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << this->name << " ScavTrap destroyed" << std::endl; }

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << this->name << " ScavTrap = " << this->name << " ScavTrap" << std::endl;

    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ScavTrap can't attack because" << this->name << " is dead" << std::endl;
        return;
    }
    std::cout << this->name << " ScavTrap attack " << target << ", causing " << this->attackDamage << " damage" << std::endl;
}

void ScavTrap::guardGate()
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ScavTrap can't guard gate because " << this->name << " is dead" << std::endl;
        return;
    }
    std::cout << this->name << " ScavTrap in now guarding the gate" << std::endl;
}