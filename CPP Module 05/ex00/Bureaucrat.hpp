#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
public:
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    ~Bureaucrat();

    Bureaucrat& operator=(const Bureaucrat& other);

    static const int MinGrade = 150;
    static const int MaxGrade = 1;

    const std::string& getName() const;
    int getGrade() const;

    void increment();
    void increment(int quantity);
    void decrement();
    void decrement(int quantity);

private:
    Bureaucrat();

    const std::string _name;
    int _grade;

public:
    class GradeTooHighException: public std::exception {
        public: const char* what() const throw ();
    };
    class GradeTooLowException: public std::exception {
        public: const char* what() const throw ();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance);

#endif