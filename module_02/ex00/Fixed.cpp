#include "Fixed.hpp"

const int	Fixed::numberOfFractalBits = 8;

Fixed::Fixed(void) : fixedPointValue(0)
{
	std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed(Fixed const & src)
{
		std::cout << "Copy constructor called" << '\n';
		*this = src;
}

Fixed::~Fixed(void)
{
		std::cout << "Destructor called" << '\n';
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << '\n';
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignation operator called" << '\n';
	if (this != &rhs)
		this->fixedPointValue = rhs.getRawBits();
	return (*this);
}
