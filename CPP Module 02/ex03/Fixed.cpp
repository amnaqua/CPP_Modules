#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed(): rawBits(0) {}

Fixed::Fixed(const int value) { this->rawBits = value << Fixed::nFracBits; }

Fixed::Fixed(const float value) { this->rawBits = roundf(value *(1 << Fixed::nFracBits)); }

Fixed::Fixed(const Fixed& other) { *this = other; }

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->rawBits = other.rawBits;
	return (*this);
}

bool Fixed::operator>(const Fixed& other) const { return (this->rawBits > other.rawBits); }

bool Fixed::operator<(const Fixed& other) const { return (this->rawBits < other.rawBits); }

bool Fixed::operator>=(const Fixed& other) const { return (this->rawBits >= other.rawBits); }

bool Fixed::operator<=(const Fixed& other) const { return (this->rawBits <= other.rawBits); }

bool Fixed::operator==(const Fixed& other) const { return (this->rawBits == other.rawBits); }

bool Fixed::operator!=(const Fixed& other) const { return (this->rawBits != other.rawBits); }

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed res;

	res.rawBits = this->rawBits + other.rawBits;
	return (res);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed res;

	res.rawBits = this->rawBits - other.rawBits;
	return (res);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed res(this->toFloat() * other.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed res(this->toFloat() / other.toFloat());
	return (res);
}

Fixed& Fixed::operator++()
{
	++(this->rawBits);
	return (*this);
}

Fixed& Fixed::operator--()
{
	--(this->rawBits);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed res(*this);

	++(this->rawBits);
	return (res);
}

Fixed Fixed::operator--(int)
{
	Fixed res(*this);

	--(this->rawBits);
	return (res);
}

Fixed& Fixed::min(Fixed& left, Fixed& right)
{
	if (left < right)
		return (left);
	return (right);
}

Fixed& Fixed::max(Fixed& left, Fixed& right)
{
	if (left > right)
		return (left);
	return (right);
}

const Fixed& Fixed::min(const Fixed& left, const Fixed& right)
{
	if (left < right)
		return (left);
	return (right);
}

const Fixed& Fixed::max(const Fixed& left, const Fixed& right)
{
	if (left > right)
		return (left);
	return (right);
}

void Fixed::setRawBits(const int rawBits) { this->rawBits = rawBits; }

int Fixed::getRawBits() const { return (this->rawBits); }

int Fixed::toInt() const { return (this->rawBits >> Fixed::nFracBits); }

float Fixed::toFloat() const { return ((float)this->rawBits) / (1 << Fixed::nFracBits); }

std::ostream &operator<<(std::ostream &os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}