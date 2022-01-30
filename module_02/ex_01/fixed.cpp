#include "fixed.hpp"

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

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << '\n';
	fixedPointValue = roundf(value * (1 << numberOfFractalBits));
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << '\n';
	fixedPointValue = roundf(value * (1 << numberOfFractalBits));
}

Fixed::~Fixed(void)
{
		std::cout << "Destructor called" << '\n';
}

std::ostream &operator<< (std::ostream & outStream, const Fixed & fixedToOutput)
{
	return (outStream << fixedToOutput.toFloat());
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
		this->fixedPointValue = rhs.fixedPointValue;
	return (*this);
}

float	Fixed::toFloat(void) const
{
	float	f;

	f = static_cast<float>(fixedPointValue) / static_cast<float>(1 << numberOfFractalBits);
	return (f);
}

int	Fixed::toInt(void) const
{
	int	i;

	i = fixedPointValue / (1 << numberOfFractalBits);
	return (i);
}