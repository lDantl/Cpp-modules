#include "Bureaucrat.hpp"

int main() {
	Bureaucrat first("Tom");
	Bureaucrat second("Jerry");
	
	std::cout << "=== try make wrong bureaucrat ===" << '\n';

	try {
		first.Bureaucrat::setGrade(0);
		std::cout << first << '\n';
	}
	catch (std::exception & e) {
		std::cerr << e.what() << '\n';
	}

	try {
		second.Bureaucrat::setGrade(151);
		std::cout << second << '\n';
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== try make right bureaucrat ===" << '\n';

	try {
		first.Bureaucrat::setGrade(2);
		std::cout << first << '\n';
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	try {
		second.Bureaucrat::setGrade(149);
		std::cout << second << '\n';
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== try increase bureaucrat's grade ===" << '\n';

	while (1) {
		try {
			first.Bureaucrat::increment();
			std::cout << first << '\n';
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
			break ;
		}
	}

	std::cout << "\n=== try decrease bureaucrat's grade ===" << '\n';
	
	while (1) {
		try {
			second.Bureaucrat::decrement();
			std::cout << second << '\n';
		}
		catch (std::exception &e) {
			std::cerr << e.what() << '\n';
			break ;
		}
	}
	

	return (0);
}