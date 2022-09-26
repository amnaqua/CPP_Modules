#include "Bureaucrat.hpp"

int main() 
{
	Bureaucrat *bob = new Bureaucrat("Bob", 2);
	try {
		std::cout << "1: " << *bob << std::endl;
		bob->increment();
		std::cout << "2: " << *bob << std::endl;
		bob->increment();
		std::cout << "3: " << *bob << std::endl;
		bob->increment();
		std::cout << "4: " << *bob << std::endl;
        bob->increment();
        std::cout << "5: " << *bob << std::endl;
        bob->increment();
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }
	delete bob;

	std::cout << std::endl;

	Bureaucrat *tim = new Bureaucrat("Tim", 10);
	try {
		std::cout << "1: " << *tim << std::endl;
		tim->increment();
		std::cout << "2: " << *tim << std::endl;
		tim->increment();
		std::cout << "3: " << *tim << std::endl;
		tim->increment();
		std::cout << "4: " << *tim << std::endl;
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }
	delete tim;

	std::cout << std::endl;

	Bureaucrat *boba = new Bureaucrat("Boba", 145);
	try {
		std::cout << "1: " << *boba << std::endl;
		boba->decrement();
		std::cout << "2: " << *boba << std::endl;
		boba->decrement();
		std::cout << "3: " << *boba << std::endl;
		boba->decrement();
		std::cout << "4: " << *boba << std::endl;
		boba->decrement();
		std::cout << "5: " << *boba << std::endl;
		boba->decrement();
		std::cout << "6: " << *boba << std::endl;
		boba->decrement();
		std::cout << "7: " << *boba << std::endl;
        boba->decrement();
        std::cout << "8: " << *boba << std::endl;
        boba->decrement();
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }
	delete boba;

	std::cout << std::endl;

	try {
		Bureaucrat ivan("Ivan", 170);
		std::cout << "Error" << std::endl;
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;

	try {
		Bureaucrat ivan2("Ivan2", -15);
		std::cout << "Error" << std::endl;
	} catch (std::exception& e) { std::cout << e.what() << std::endl; }

	return 0;
}