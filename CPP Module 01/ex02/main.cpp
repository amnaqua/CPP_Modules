#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "-----------Address-----------\n";
    std::cout << "string: " << &string << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;
    std::cout << "-----------Content-----------\n";
    std::cout << "string: " << string << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;

    return (0);
}