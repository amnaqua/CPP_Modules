#include "Zombie.hpp"

#include <iostream>

Zombie *zombieHorde(int N, std::string name);

int main()
{
    int size;
    Zombie *horde;

    size = 5;
    std::cout << "Size: " << size << std::endl;
    horde = zombieHorde(size, "horde1: ");
    std::cout << "Horde: " << horde << std::endl;
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;

    std::cout << "--------------------------------" << std::endl;

    size = 2;
    std::cout << "Size: " << size << std::endl;
    horde = zombieHorde(size, "horde2: ");
    std::cout << "Horde: " << horde << std::endl;
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;

    std::cout << "--------------------------------" << std::endl;

    size = 0;
    std::cout << "Size: " << size << std::endl;
    horde = zombieHorde(size, "horde3: ");
    std::cout << "Horde: " << horde << std::endl;
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;

    std::cout << "--------------------------------" << std::endl;

    size = -3;
    std::cout << "Size: " << size << std::endl;
    horde = zombieHorde(size, "horde4: ");
    std::cout << "Horde: " << horde << std::endl;
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;
}