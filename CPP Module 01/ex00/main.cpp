#include "Zombie.hpp"

#include <iostream>

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie *Artur = new Zombie("Artur");
    Artur->announce();
    delete Artur;
    std::cout << "---------------------------\n";
    randomChump("Boba");
    std::cout << "---------------------------\n";
    Zombie *Biba = newZombie("Biba");
    Zombie *Liza = newZombie("Liza");
    Liza->announce();
    Biba->announce();
    delete Biba;
    Liza->announce();
    delete Liza;

    return (0); 
}