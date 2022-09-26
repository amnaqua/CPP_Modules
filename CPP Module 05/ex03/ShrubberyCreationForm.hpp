#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

# include <string>

class ShrubberyCreationForm: public Form
{
public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

    void executeAction() const;

private:
    ShrubberyCreationForm();
};

#endif