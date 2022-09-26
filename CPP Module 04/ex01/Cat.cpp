#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";

    std::cout << "Cat: Default constructor" << std::endl;
}

Cat::Cat(const Cat& other)
{
    *this = other;
    this->brain = new Brain();

    std::cout << "Cat: Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    this->Animal::operator=(other);
    *this->brain = *other.brain;

    std::cout << "Cat: Assignment operator" << std::endl;

    return (*this);
}

Cat::~Cat()
{
    delete this->brain;

    std::cout << "Cat: Destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}

Brain* Cat::getBrain() const { return (this->brain); }