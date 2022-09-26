#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed& other);
    ~Fixed();

    Fixed& operator=(const Fixed& other);

    void setRawBits(const int rawBits);
    int getRawBits() const;

private:
    static const int nFracBits = 8;
    int rawBits;
};

#endif