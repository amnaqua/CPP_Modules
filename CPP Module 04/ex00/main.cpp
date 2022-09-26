#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
    std::cout << "---------------Animals--------------" << std::endl;

    Animal *animal = new Animal();
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    std::cout << animal->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    delete animal;
    delete dog;
    delete cat;

    std::cout << "\n-----------Wrong Animals------------\n" << std::endl;

    WrongAnimal *wAnimal = new WrongAnimal();
    WrongAnimal *wCat = new WrongCat();

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    std::cout << wAnimal->getType() << std::endl;
    std::cout << wCat->getType() << std::endl;

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    wAnimal->makeSound();
    wCat->makeSound();

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    delete wAnimal;
    delete wCat;
}