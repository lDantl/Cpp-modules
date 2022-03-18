#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

// int main()
// {
// 	Bureaucrat first("cat");
// 	Bureaucrat second("dog");
	
// 	first.Bureaucrat::setGrade(3);
// 	second.Bureaucrat::setGrade(150);

// 	std::cout << first << '\n';
// 	std::cout << second << '\n';

// 	std::cout << "\n=== try make wrong form ===" << '\n';

// 	try {
// 		Form third("cat's form", 0, 1);
// 		std::cout << third << '\n';
// 	}
// 	catch (std::exception & e) {
// 		std::cerr << e.what() << '\n';
// 	}

// 	try {
// 		Form fourth("dog's form", 151, 150);
// 		std::cout << fourth << '\n';
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << "\n=== try make right forms ===" << '\n';

// 	try {
// 		Form third("cat's form", 2, 1);
// 		std::cout << third << '\n';

// 		Form fourth("dog's form", 149, 150);
// 		std::cout << fourth << '\n';

// 		std::cout << "\n=== try to sign forms with low grade ===" << '\n';

// 		try {
// 			first.signForm(third);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << '\n';
// 		}

// 		try {
// 			second.signForm(fourth);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << '\n';
// 		}

// 		std::cout << "\n=== increase bureaucrats' grades ===" << '\n';

// 		try {
// 			first.Bureaucrat::increment();
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << '\n';
// 		}

// 		try {
// 			second.Bureaucrat::increment();
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << '\n';
// 		}

// 		std::cout << first << '\n';
// 		std::cout << second << '\n';

// 		std::cout << "\n=== try to sign forms again ===" << '\n';

// 		try {
// 			first.signForm(third);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << '\n';
// 		}

// 		try {
// 			second.signForm(fourth);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << '\n';
// 		}
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << e.what() << '\n';
// 	}	

// 	return (0);
// }


int main(void)
{
	Bureaucrat francis("Francis");
	francis.Bureaucrat::setGrade(3);
	std::cout << francis << '\n';

	Form form1("Taxes", 100, 50);
	std::cout << form1 << '\n';
	form1.beSigned(francis);
	std::cout << form1 << '\n';

	std::cout << "---" << '\n';

	Form form2("NDA", 99, 50);
	std::cout << form2 << '\n';
	try
	{
		francis.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form2 << '\n';

	std::cout << "---" << '\n';

	Form form3("Other Paper", 101, 50);
	std::cout << form3 << '\n';
	francis.signForm(form3);
	std::cout << form3 << '\n';
	try
	{
		francis.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form3 << '\n';

	std::cout << "---" << '\n';

	try
	{
		Form formException("NDA", 99, 50);
		std::cout << formException << '\n';
		formException.beSigned(francis);
		std::cout << formException << '\n';
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---" << '\n';

	try
	{
		Form formException("Important Form", 1000, 50);
		std::cout << formException << '\n';
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---" << '\n';

	try
	{
		Form formException("Important Form", 0, 50);
		std::cout << formException << '\n';
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---" << '\n';

	try
	{
		Form formException("Important Form", 100, 1000);
		std::cout << formException << '\n';
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---" << '\n';

	try
	{
		Form formException("Important Form", 100, 0);
		std::cout << formException << '\n';
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
