#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(): name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{ std::cout << this->name << " ClapTrap created" << std::endl; }

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{ std::cout << this->name << " ClapTrap created" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;

    std::cout << this->name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << this->name << " ClapTrap destroyed" << std::endl; }

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << this->name << " = " << other.name << std::endl;

    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ClapTrap can't attack beacuse " << this->name << " is dead" << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << this->name << " ClapTrap can't attack because no Energy Points left" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << this->name << " ClapTrap attack " << target << ", causing " << this->attackDamage << " damage"
        << ", " << this->energyPoints << " energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ClapTrap can't take damage because " << this->name << " is dead" << std::endl;
        return;
    }
    if (amount < 0)
    {
        std::cout << this->name << " ClapTrap can't take damage because amount is too low, min 1" << std::endl;
        return;
    }
    if (amount > this->hitPoints)
        amount = this->hitPoints;
    
    this->hitPoints -= amount;

    std::cout << this->name << " ClapTrap has taken " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0)
    {
        std::cout << this->name << " ClapTrap can't be repaired because no Energy Points left" << std::endl;
        return;
    }
    if (amount <= 0)
    {
        std::cout << this->name << " ClapTrap can't be repaired because amount is to low, min value 1" << std::endl;
        return;
    }
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ClapTrap can't be repaired because " << this->name << " is dead" << std::endl;
        return;
    }
    this->hitPoints += amount;
    this->energyPoints--;
    std::cout << this->name << " ClapTrap has repaired " << amount << " hit points"
        << ", " << this->energyPoints << " energy points left" << std::endl;
}