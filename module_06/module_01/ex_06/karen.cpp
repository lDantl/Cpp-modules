#include "karen.hpp"

void	Karen::debug()
{
	std::cout << "[ DEBUG ]"<< '\n';
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<< '\n' << '\n';
}

void	Karen::info()
{
	std::cout << "[ INFO ]"<< '\n';
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"<< '\n' << '\n';
}

void	Karen::warning()
{
	std::cout << "[ WARNING ]"<< '\n';
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month."<< '\n'  << '\n';
}

void	Karen::error()
{
	std::cout << "[ ERROR ]"<< '\n';
	std::cout << "This is unacceptable, I want to speak to the manager now." << '\n' << '\n';
}

void	Karen::notFound()
{
	std::cout << "[ Probably complaining about insignificant problems ]"<< '\n';
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
	int num = level.length();
	int sum = 0;	
	for (int i = 0; i < num; ++i)
	sum += level[i];
	int res = sum + num;
	switch (res)
	{
		case 364:
			return (eDebug);
		case 304:
			return (eInfo);
		case 541:
			return (eWarning);
		case 399:
			return (eError);
	}
	return (eNotFound);
}

void	Karen::complain(std::string level)
{
	void	(Karen::*f[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::notFound};
	
	switch (hashIt(level))
	{
		case eDebug:
			(this->*f[eDebug])();
		case eInfo:
			(this->*f[eInfo])();
		case eWarning:
			(this->*f[eWarning])();
		case eError:
		{
			(this->*f[eError])();
			break ;
		}
		case eNotFound:
			(this->*f[eNotFound])();
	}
}
