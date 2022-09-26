#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed(): rawBits(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = value << Fixed::nFracBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(value *(1 << Fixed::nFracBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->rawBits = other.rawBits;
	return (*this);
}

void Fixed::setRawBits(const int rawBits)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = rawBits;
}

int Fixed::getRawBits() const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

int Fixed::toInt() const { return (this->rawBits >> Fixed::nFracBits); }

float Fixed::toFloat() const { return ((float)this->rawBits / (1 << Fixed::nFracBits));}

std::ostream &operator<<(std::ostream &os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}