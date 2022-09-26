#include "Scalar.hpp"

#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        std::cout << "Usage: <program> <literal>" << std::endl;
        return (1);
    }

    Scalar::convert(argv[1]);

    return (0);
}