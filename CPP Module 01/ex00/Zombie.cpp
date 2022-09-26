#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie()
{
    std::cout << this->name << ": Destroyed" << std::endl;
}

void Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}