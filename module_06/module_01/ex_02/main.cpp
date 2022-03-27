#include <iostream>
#include <string>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";

	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "text adress: " << &str << '\n';
	std::cout << "stringPTR adress: " << stringPTR << '\n';
	std::cout << "stringREF adress: " << &stringREF << '\n';

	std::cout << "text : " << str << '\n';
	std::cout << "using stringPTR: " << *stringPTR << '\n';
	std::cout << "using stringREF: " << stringREF << '\n';
}