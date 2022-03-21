#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat first("dog");
	Bureaucrat second("cat");
	Bureaucrat sixth("Zafod Beeblebrox");
	
	first.Bureaucrat::setGrade(24);
	second.Bureaucrat::setGrade(46);
	sixth.Bureaucrat::setGrade(6);

	std::cout << first << '\n';
	std::cout << second << '\n';
	std::cout << sixth << "\n\n\n";

	Form *third = new PresidentialPardonForm("cat");
	Form *fourth = new RobotomyRequestForm("dog");
	Form *fifth = new ShrubberyCreationForm("home");

	std::cout << *third << '\n';
	std::cout << *fourth << '\n';
	std::cout << *fifth << "\n\n";

	std::cout << "\n=== try sign forms ===" << '\n';

	try {
		first.Bureaucrat::signForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		second.Bureaucrat::signForm(*fourth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		sixth.Bureaucrat::signForm(*third);
	}
	catch (std::exception &e){
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== try to execute forms ===" << '\n';

	try {
		first.Bureaucrat::executeForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		second.Bureaucrat::executeForm(*fourth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		sixth.Bureaucrat::executeForm(*third);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== increase bureaucrats' grades ===" << '\n';

	try {
		first.Bureaucrat::increment();
		std::cout << first << '\n';
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		second.Bureaucrat::increment();
		std::cout << second << '\n';
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		sixth.Bureaucrat::increment();	
		std::cout << sixth << '\n';
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== try to execute forms again ===" << '\n';

	try {
		sixth.Bureaucrat::executeForm(*third);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		second.Bureaucrat::executeForm(*fourth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		first.Bureaucrat::executeForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	delete third;
	delete fourth;
	delete fifth;
	return (0);
}
