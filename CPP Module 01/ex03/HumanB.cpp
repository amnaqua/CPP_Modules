#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name): name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const 
{
	if (weapon != NULL) 
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    else
		std::cout << this->name << " attacks with his bare hands" << std::endl;
}

void HumanB::setWeapon(const Weapon& weapon) { this->weapon = (Weapon*)&weapon; }
