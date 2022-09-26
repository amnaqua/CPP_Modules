#include "Character.hpp"

#include <iostream>

Character::Character() {}

Character::Character(const std::string& name): _name(name), _EquipedAmount(0)
{
    for (int i = 0; i < Character::InventorySize; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character& other) { *this = other; }

Character::~Character()
{
    for (int i = 0; i < this->_EquipedAmount; i++)
        delete this->_inventory[i];
}

Character& Character::operator=(const Character& other)
{
    this->_name = other._name;
    this->_EquipedAmount = other._EquipedAmount;
    
    for (int i = 0; i < Character::InventorySize; i++)
        this->_inventory[i] = other._inventory[i]->clone();
    return (*this);
}

const std::string& Character::getName() const { return (this->_name); }

void Character::equip(AMateria *m)
{
    if (this->_EquipedAmount < Character::InventorySize)
    {
        this->_inventory[this->_EquipedAmount] = m;
        this->_EquipedAmount++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < this->_EquipedAmount)
    {
        delete this->_inventory[idx];
        int i = idx;
        for (; i < this->_EquipedAmount - 1; i++)
            this->_inventory[i] = this->_inventory[i + 1];
        this->_inventory[i] = NULL;
        --(this->_EquipedAmount);
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < this->_EquipedAmount)
        this->_inventory[idx]->use(target);
    else
        std::cout << "can't use material, index" << idx << " is empty" << std::endl;
}