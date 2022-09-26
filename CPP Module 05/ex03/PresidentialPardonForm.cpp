#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon", "none", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("presidential pardon", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{
    *this = other;
    std::cout << "Copy of PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    std::cout << "PresidentialPardonForm assignment operator" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

void PresidentialPardonForm::executeAction() const
{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}