#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

int main()
{
    ClapTrap *clap1 = new ClapTrap();
    ClapTrap *clap2 = new ClapTrap("Ivan");
    ClapTrap *clap3 = new ClapTrap(*clap1);
    ScavTrap *scav1 = new ScavTrap();
    ScavTrap *scav2 = new ScavTrap("Zoro");
    ScavTrap *scav3 = new ScavTrap(*scav1);
    FragTrap *frag1 = new FragTrap();
    FragTrap *frag2 = new FragTrap("Liza");
    FragTrap *frag3 = new FragTrap(*frag1);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    clap1->attack("Slime");
    clap2->attack("Dragon");
    clap3->attack("Spider");
    scav1->attack("Slime");
    scav2->attack("Dragon");
    scav3->attack("Spider");
    frag1->attack("Slime");
    frag2->attack("Dragon");
    frag3->attack("Spider");

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    clap1->takeDamage(10);
    clap2->takeDamage(-10);
    clap3->takeDamage(0);
    scav1->takeDamage(10);
    scav2->takeDamage(-10);
    scav3->takeDamage(0);
    frag1->takeDamage(10);
    frag2->takeDamage(-10);
    frag3->takeDamage(0);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    clap1->beRepaired(10);
    clap2->beRepaired(-10);
    clap3->beRepaired(0);
    scav1->beRepaired(10);
    scav2->beRepaired(-10);
    scav3->beRepaired(0);
    frag1->beRepaired(10);
    frag2->beRepaired(-10);
    frag3->beRepaired(0);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    scav1->guardGate();
    scav2->guardGate();
    scav3->guardGate();

    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    frag1->highFivesGuys();
    frag2->highFivesGuys();
    frag3->highFivesGuys();

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
    std::cout << "------------------------------------" << std::endl;
    delete frag1;
    std::cout << "------------------------------------" << std::endl;
    delete frag2;
    std::cout << "------------------------------------" << std::endl;
    delete frag3;
}