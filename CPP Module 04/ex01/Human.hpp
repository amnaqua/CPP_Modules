#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Animal.hpp"

class Human: public Animal
{
public:
    Human();
    Human(const Human& other);
    ~Human();

    Human& operator=(const Human& other);

    void makeSound() const;
};

#endif