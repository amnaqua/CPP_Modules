#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* ivan = new Bureaucrat("Ivan", 130);
	Bureaucrat* boba = new Bureaucrat("Boba", 15);
	Form* budgets = new Form("budgets", 30, 10);

	std::cout << std::endl;

	std::cout << *budgets;
	std::cout << std::endl;
	try {
		ivan->signForm(*budgets);
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }

	try {
		boba->signForm(*budgets);
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }
	std::cout << std::endl;
	std::cout << *budgets;

	std::cout << std::endl;

	try {
		budgets->beSigned(*ivan);
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }
	
	try {
		budgets->beSigned(*boba);
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;

	delete ivan;
	delete boba;
	delete budgets;

	return 0;
}