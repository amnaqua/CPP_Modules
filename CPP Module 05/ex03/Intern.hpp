#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# include <string>

class Intern
{
public:
    Intern();
    Intern(const Intern& other);
    ~Intern();

    Intern& operator=(const Intern& other);

    Form* makeForm(std::string name, std::string target);

private:
    typedef struct s_forms
    {
        std::string name;
        Form *formClass;
    }   t_forms;
    
};

#endif