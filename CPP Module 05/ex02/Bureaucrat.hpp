#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"

# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat {
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& other);

		static const int kMinGrade = 150;
		static const int kMaxGrade = 1;

		const std::string& getName() const;
		int getGrade() const;

		void increment();
		void increment(int quantity);
		void decrement();
		void decrement(int quantity);

		void signForm(Form& form) const;
		void executeForm(const Form& form) const;
	private:
		Bureaucrat();

		const std::string _name;
		int _grade;
	public:
		class GradeTooHighException : public std::exception {
			public: const char* what() const throw ();
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance);

#endif