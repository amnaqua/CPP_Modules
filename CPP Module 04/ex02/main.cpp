#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "Human.hpp"

#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        std::cout << "Usage: <program> <number of animals>" << std::endl;
        return (0);
    }
    std::cout << "---------------Basic----------------\n" << std::endl;

    Dog *dog = new Dog();
    Cat *cat = new Cat();
    Human *human = new Human();

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << human->getType() << std::endl;

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    dog->makeSound();
    cat->makeSound();
    human->makeSound();

    std::cout << "\n----------------Deep----------------\n" << std::endl;

    cat->getBrain()->ideas[0] = "Im Boba";
    cat->getBrain()->ideas[1] = "Im Biba";

    std::cout << "Cat ideas" << std::endl;
    for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
    std::cout << std::endl;

    std::cout << "Create cat2" << std::endl;
    Cat *cat2 = new Cat();
    std::cout << std::endl;

    std::cout << cat->getBrain()->ideas << std::endl;
    std::cout << cat2->getBrain()->ideas << std::endl;

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    std::cout << "Cat2 ideas" << std::endl;
    for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
    std::cout << std::endl;

    std::cout << "Cat2 = Cat" << std::endl;
    *cat2 = *cat;
    std::cout << std::endl;

    std::cout << cat->getBrain()->ideas << std::endl;
    std::cout << cat2->getBrain()->ideas << std::endl << std::endl;

    std::cout << "Cat ideas" << std::endl;
    for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
    std::cout << std::endl;

    std::cout << "Cat2 ideas" << std::endl;
    for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
    std::cout << std::endl;

    std::cout << cat->getBrain()->ideas << std::endl;
    std::cout << cat2->getBrain()->ideas << std::endl << std::endl;

    std::cout << "Cat ideas (now Loba)" << std::endl;
    cat->getBrain()->ideas[1] = "Im Loba";
    for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
    std::cout << std::endl;

    std::cout << "Cat2 ideas" << std::endl;
    for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
    std::cout << std::endl;

    std::cout << cat->getBrain()->ideas << std::endl;
    std::cout << cat2->getBrain()->ideas << std::endl;

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    delete dog;
    std::cout << "------------------------------------" << std::endl;
    delete cat;
    std::cout << "------------------------------------" << std::endl;
    delete cat2;
    std::cout << "------------------------------------" << std::endl;
    delete human;

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    int animalsNum = std::atoi(argv[1]);
    Animal *animals[animalsNum];

    for (int i = 0; i < animalsNum; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    for (int i = 0; i < animalsNum; i++)
        animals[i]->makeSound();

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    for (int i = 0; i < animalsNum; i++)
        delete animals[i];

    return (0);
}
