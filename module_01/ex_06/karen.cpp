#include "karen.hpp"

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<< '\n' << '\n';
}

void	Karen::info()
{
		std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"<< '\n' << '\n';
}

void	Karen::warning()
{
		std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month."<< '\n'  << '\n';
}

void	Karen::error()
{
		std::cout << "This is unacceptable, I want to speak to the manager now." << '\n' << '\n';
}

enum	stringCode
{
	eDebug,
	eInfo,
	eWarning,
	eError,
	eNotFound
};

stringCode	hashIt(std::string const &level)
{
	if (level == "DEBUG")
		return (eDebug);
	if (level == "INFO")
		return (eInfo);
	if (level == "WARNING")
		return (eWarning);
	if (level == "ERROR")
		return (eError);
	return (eNotFound);
}

void	Karen::complain(std::string level)
{
	void	(Karen::*f[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	
	switch (hashIt(level))
	{
		case eDebug:
			(this->*f[eDebug])();
		case eInfo:
			(this->*f[eInfo])();
		case eWarning:
			(this->*f[eWarning])();
		case eError:
			(this->*f[eError])();
		case eNotFound:
			
			break;
	}
}
