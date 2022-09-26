#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& other);
	~Fixed();

	Fixed& operator=(const Fixed& other);

	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed& left, Fixed& right);
	static Fixed& max(Fixed& left, Fixed& right);
	static const Fixed& min(const Fixed& left, const Fixed& right);
	static const Fixed& max(const Fixed& left, const Fixed& right);
	
	void setRawBits(const int rawBits);
	int getRawBits() const;
	int toInt() const;
	float toFloat() const;

private:
	static const int nFracBits = 8;
	int rawBits;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& myClass);

#endif