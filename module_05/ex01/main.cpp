#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

int main()
{
	Bureaucrat first("cat");
	Bureaucrat second("dog");
	
	first.Bureaucrat::setGrade(3);
	second.Bureaucrat::setGrade(150);

	std::cout << first << '\n';
	std::cout << second << '\n';

	std::cout << "\n=== try make wrong form ===" << '\n';

	try {
		Form third("cat's form", 0, 1);
		std::cout << third << '\n';
	}
	catch (std::exception & e) {
		std::cerr << e.what() << '\n';
	}

	try {
		Form fourth("dog's form", 151, 150);
		std::cout << fourth << '\n';
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== try make right forms ===" << '\n';

	try {
		Form third("cat's form", 2, 1);
		std::cout << third << '\n';

		Form fourth("dog's form", 149, 150);
		std::cout << fourth << '\n';

		std::cout << "\n=== try to sign forms with low grade ===" << '\n';

		try {
			first.signForm(third);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
		}

		try {
			second.signForm(fourth);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
		}

		std::cout << "\n=== increase bureaucrats' grades ===" << '\n';

		try {
			first.Bureaucrat::increment();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
		}

		try {
			second.Bureaucrat::increment();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
		}

		std::cout << first << '\n';
		std::cout << second << '\n';

		std::cout << "\n=== try to sign forms again ===" << '\n';

		try {
			first.signForm(third);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
		}

		try {
			second.signForm(fourth);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}	

	return (0);
}
