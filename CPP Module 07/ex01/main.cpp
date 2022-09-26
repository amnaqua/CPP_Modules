#include "iter.hpp"

#include <iostream>

template<typename T>
void debug(const T& var) 
{
	std::cout << var << " ";
}

template<typename T>
void increment(const T& var) 
{
	++(const_cast<T&>(var));
}

int main()
{
    int arrInt[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    float arrFloat[5] = { 1.5f, 2.5f, 3.5f, 4.5f, 5.5f };
    double arrDouble[5] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    std::string arrStr[4] = {"abc", "qwe", "zxc", "kek"};

    std::cout << "INT array:" << std::endl;
    ::iter(arrInt, 10, &debug);

    std::cout << "\n----------------------" << std::endl;

    std::cout << "INT array (increment):" << std::endl;
    ::iter(arrInt, 10, &increment);
    ::iter(arrInt, 10, &debug);

    std::cout << "\n----------------------" << std::endl;

    std::cout << "FLOAT array:" << std::endl;
    ::iter(arrFloat, 5, &debug);

    std::cout << "\n----------------------" << std::endl;

    std::cout << "FLOAT array (increment):" << std::endl;
    ::iter(arrFloat, 5, &increment);
    ::iter(arrFloat, 5, &debug);

    std::cout << "\n----------------------" << std::endl;

    std::cout << "Double array:" << std::endl;
    ::iter(arrDouble, 5, &debug);

    std::cout << "\n----------------------" << std::endl;

    std::cout << "Double array (increment):" << std::endl;
    ::iter(arrDouble, 5, &increment);
    ::iter(arrDouble, 5, &debug);

    std::cout << "\n----------------------" << std::endl;

    std::cout << "STR array:" << std::endl;;
    ::iter(arrStr, 4, &debug);

    std::cout << std::endl;
    return (0);
}