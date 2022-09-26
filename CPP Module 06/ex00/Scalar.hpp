#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <string>

class Scalar
{
public:
    ~Scalar();

    static void convert(const std::string& literal);

private:
    Scalar();
    Scalar(const Scalar& other);
    Scalar& operator=(const Scalar& other);
};


#endif