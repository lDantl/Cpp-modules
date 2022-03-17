#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

// int main()
// {
// 	Bureaucrat first("cat");
// 	Bureaucrat second("dog");
	
// 	first.Bureaucrat::setGrade(3);
// 	second.Bureaucrat::setGrade(150);

// 	std::cout << first << std::endl;
// 	std::cout << second << std::endl;

// 	std::cout << "\n=== try make wrong form ===" << std::endl;

// 	try {
// 		Form third("cat's form", 0, 1);
// 		std::cout << third << std::endl;
// 	}
// 	catch (std::exception & e) {
// 		std::cerr << e.what() << std::endl;
// 	}

// 	try {
// 		Form fourth("dog's form", 151, 150);
// 		std::cout << fourth << std::endl;
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}

// 	std::cout << "\n=== try make right forms ===" << std::endl;

// 	try {
// 		Form third("cat's form", 2, 1);
// 		std::cout << third << std::endl;

// 		Form fourth("dog's form", 149, 150);
// 		std::cout << fourth << std::endl;

// 		std::cout << "\n=== try to sign forms with low grade ===" << std::endl;

// 		try {
// 			first.signForm(third);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << std::endl;
// 		}

// 		try {
// 			second.signForm(fourth);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << std::endl;
// 		}

// 		std::cout << "\n=== increase bureaucrats' grades ===" << std::endl;

// 		try {
// 			first.Bureaucrat::increment();
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << std::endl;
// 		}

// 		try {
// 			second.Bureaucrat::increment();
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << std::endl;
// 		}

// 		std::cout << first << std::endl;
// 		std::cout << second << std::endl;

// 		std::cout << "\n=== try to sign forms again ===" << std::endl;

// 		try {
// 			first.signForm(third);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << std::endl;
// 		}

// 		try {
// 			second.signForm(fourth);
// 		}
// 		catch (std::exception &e) {
// 			std::cerr << e.what() << std::endl;
// 		}
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}	

// 	return (0);
// }


int main(void)
{
	Bureaucrat francis("Francis");
	francis.Bureaucrat::setGrade(3);
	std::cout << francis << std::endl;

	Form form1("Taxes", 100, 50);
	std::cout << form1 << std::endl;
	form1.beSigned(francis);
	std::cout << form1 << std::endl;

	std::cout << "---" << std::endl;

	Form form2("NDA", 99, 50);
	std::cout << form2 << std::endl;
	try
	{
		francis.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	std::cout << "---" << std::endl;

	Form form3("Other Paper", 101, 50);
	std::cout << form3 << std::endl;
	francis.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		francis.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form3 << std::endl;

	std::cout << "---" << std::endl;

	try
	{
		Form formException("NDA", 99, 50);
		std::cout << formException << std::endl;
		formException.beSigned(francis);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 1000, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 0, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 100, 0);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
//123