#include "Bureaucrat.hpp"

namespace 
{
    void CheckGrade(int grade)
    {
        if (grade > Bureaucrat::MinGrade) throw Bureaucrat::GradeTooLowException();
        if (grade < Bureaucrat::MaxGrade) throw Bureaucrat::GradeTooHighException();
    }
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade)
{
    CheckGrade(grade);

    std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name)
{
    *this = other;

    std::cout << "Bureaucrat copy created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    this->_grade = other._grade;

    std::cout << "Assignment operator" << std::endl;

    return (*this);
}

const std::string& Bureaucrat::getName() const { return (this->_name); }

int Bureaucrat::getGrade() const { return (this->_grade); }

void Bureaucrat::increment()
{
    std::cout << "Increment grade by 1" << std::endl;
    CheckGrade(this->_grade - 1);
    --this->_grade;
}

void Bureaucrat::increment(int quantity)
{
    std::cout << "Increment grade by " << quantity << std::endl;
    CheckGrade(this->_grade - quantity);
    this->_grade -= quantity;
}

void Bureaucrat::decrement()
{
    std::cout << "Decrement grade by 1" << std::endl;
    CheckGrade(this->_grade + 1);
    ++this->_grade;
}

void Bureaucrat::decrement(int quantity)
{
    std::cout << "Decrement grade by " << quantity << std::endl;
    CheckGrade(this->_grade + quantity);
    this->_grade += quantity;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Exception: grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Exception: grade too low");
}

void Bureaucrat::signForm(Form& form)
{
    form.beSigned(*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance)
{
    os << instance.getName() << ", bureaucrat grade " << instance.getGrade();
    return (os);
}

