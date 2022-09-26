#include "Harl.hpp"

#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
    static const int kLevels = 4;

    std::string complainLevels[kLevels] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    f functions[kLevels] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < kLevels; i++)
    {
        if (complainLevels[i].compare(level) == 0)
        {
            (this->*(functions[i])) ();
            return;
        }
    }
    std::cerr << "Error: Invalid complain level" << std::endl;
}

void Harl::debug()
{
    std::cout << "DEBUG\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
    std::cout << "I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO\n";
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn't put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING\n";
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "ERROR\n";
    std::cout << "This is unacceptable! "; 
    std::cout << "I want to speak to the manager now." << std::endl;
}