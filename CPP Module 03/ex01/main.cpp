#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

int main()
{
    ClapTrap *clap1 = new ClapTrap();
    ScavTrap *scav1 = new ScavTrap();
    ClapTrap *clap2 = new ClapTrap("Zoro");
    ScavTrap *scav2 = new ScavTrap("Ivan");
    ClapTrap *clap3 = new ClapTrap(*clap1);
    ScavTrap *scav3 = new ScavTrap(*scav1);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    clap1->attack("Slime");
    scav1->attack("Ivan");
    clap2->attack("Boba");
    scav2->attack("Biba");
    clap3->attack("Luiza");
    scav3->attack("Robert");

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    clap1->takeDamage(1000);
    scav1->takeDamage(5);
    clap2->takeDamage(-10);
    scav2->takeDamage(0);
    clap3->takeDamage(10);
    scav3->takeDamage(3);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    clap1->beRepaired(0);
    scav1->beRepaired(100);
    clap2->beRepaired(15);
    scav2->beRepaired(-10);
    clap3->beRepaired(5);
    scav3->beRepaired(50);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    scav1->guardGate();
    scav2->guardGate();
    scav3->guardGate();

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");
    scav1->attack("Slime");

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    delete clap1;
    delete clap2;
    delete clap3;
    std::cout << "------------------------------------" << std::endl;
    delete scav1;
    std::cout << "------------------------------------" << std::endl;
    delete scav2;
    std::cout << "------------------------------------" << std::endl;
    delete scav3;
}