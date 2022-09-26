#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shrubbery creation", "none", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): Form("shrubbery creation", target, 145, 137)
{
    std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{
    *this = other;
    std::cout << "Copy of ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "ShrubberyCreationForm assignment operator" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

void ShrubberyCreationForm::executeAction() const
{
    std::ofstream out;

    out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);

    out << std::endl;
    out << "_________________88" << std::endl;
    out << "________________8888" << std::endl;
    out << "________________8888" << std::endl;
    out << "_______________888888" << std::endl;
    out << "______________88888888" << std::endl;
    out << "_____________8888888888" << std::endl;
    out << "____________8888888888888" << std::endl;
    out << "_________888888888888888888" << std::endl;
    out << "_______8888888888888888888888" << std::endl;
    out << "_____________8888888888" << std::endl;
    out << "___________88888888888888" << std::endl;
    out << "_________888888888888888888" << std::endl;
    out << "_______8888888888888888888888" << std::endl;
    out << "____8888888888888888888888888888" << std::endl;
    out << "___________888888888888888" << std::endl;
    out << "__________88888888888888888" << std::endl;
    out << "________888888888888888888888" << std::endl;
    out << "_____888888888888888888888888888" << std::endl;
    out << "__888888888888888888888888888888888" << std::endl;
    out << "__________888888888888888888" << std::endl;
    out << "_________88888888888888888888" << std::endl;
    out << "_______888888888888888888888888" << std::endl;
    out << "_____8888888888888888888888888888" << std::endl;
    out << "__8888888888888888888888888888888888" << std::endl;
    out << "88888888888888__8888888__8888888888888" << std::endl;
    out << "_________________88888" << std::endl;
    out << "_________________88888" << std::endl;
}