#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

# include <string>

class RobotomyRequestForm: public Form
{
public:
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    void executeAction() const;

private:
    RobotomyRequestForm();
};

#endif