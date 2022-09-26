#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern& other)
{
    std::cout << "Copy of Intern created" << std::endl;
    *this = other;
}

Intern::~Intern()
{
    std::cout << "Intern destroyed" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
    std::cout << "Intern assignment operator" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
    static const int FormsNum = 3;
    t_forms forms[FormsNum] = {
        { "shrubbery creation", new ShrubberyCreationForm(target) },
        { "robotomy request", new RobotomyRequestForm(target) },
        { "presidential pardon", new PresidentialPardonForm(target)}
    };
    
    Form* ret = NULL;
    for (int i = 0; i < FormsNum; i++)
    {
        if (forms[i].name == name)
            ret = forms[i].formClass;
        else
            delete forms[i].formClass;
    }

    if (ret != NULL)
        std::cout << "Intern creates form " << name << std::endl;
    else
        std::cout << "Intern was not able to find the form" << std::endl;

    return (ret);
}