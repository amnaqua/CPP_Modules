#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const 
{
    std::cout << this->name << " attacks weth his " << this->weapon.getType() << std::endl;
}
