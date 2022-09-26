#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
    this->brain = new Brain;
    this->type = "Dog";

    std::cout << "Dog: Default constructor" << std::endl;
}

Dog::Dog(const Dog& other)
{
    *this = other;
    this->brain = new Brain();

    std::cout << "Dog: Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    this->Animal::operator=(other);
    *this->brain = *other.brain;

    std::cout << "Dog: Assignment operator" << std::endl;

    return (*this);
}

Dog::~Dog()
{
    delete this->brain;

    std::cout << "Dog: Destructor" << std::endl;;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

Brain* Dog::getBrain() const { return (this->brain); }