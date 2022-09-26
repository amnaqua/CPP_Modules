#include "ClapTrap.hpp"

#include <iostream>

int main(void)
{
    ClapTrap *obj1 = new ClapTrap();
    ClapTrap *obj2 = new ClapTrap("Boba");
    ClapTrap *obj3 = new ClapTrap(*obj1);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    obj1->attack("Slime");
    obj2->attack("Boba");
    obj3->attack("Rob");

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    obj1->takeDamage(80);
    obj2->takeDamage(5);
    obj2->takeDamage(5);
    obj2->takeDamage(5);
    obj3->takeDamage(5);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    obj1->beRepaired(100);
    obj1->beRepaired(0);
    obj1->beRepaired(-10);
    obj2->beRepaired(10);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(1);
    obj3->beRepaired(0);
    obj3->beRepaired(5);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    delete obj1;
    delete obj2;
    delete obj3;
}