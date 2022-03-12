#include "Fixed.hpp"

const int	Fixed::numberOfFractalBits = 8;

Fixed::Fixed(void) : fixedPointValue(0){};

Fixed::Fixed(Fixed const & src)
{
		*this = src;
}

Fixed::Fixed(int value)
{
	fixedPointValue = roundf(value * (1 << numberOfFractalBits));
}

Fixed::Fixed(float value)
{
	fixedPointValue = roundf(value * (1 << numberOfFractalBits));
}

Fixed::~Fixed(void){};

std::ostream &operator<< (std::ostream & outStream, const Fixed & fixedToOutput)
{
	return (outStream << fixedToOutput.toFloat());
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
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

Fixed &Fixed::operator++(void)
{
	++fixedPointValue;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	operator++();
	return (old);
}

Fixed &Fixed::operator--(void)
{
	fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	operator--();
	return (old);
}

Fixed Fixed::operator+(Fixed const & rhs)
{
	fixedPointValue += rhs.fixedPointValue;
	return (*this);
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	fixedPointValue -= rhs.fixedPointValue;
	return (*this);
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	float	old;
	float	old2;
	old = toFloat();
	old2 = rhs.toFloat();
	old *= old2;
	fixedPointValue = old * (1 << numberOfFractalBits);
	return (*this);
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	float	old;
	float	old2;
	old =  toFloat();
	old2 = rhs.toFloat();
	old /= old2;
	fixedPointValue = old * (1 << numberOfFractalBits);
	return (*this);
}

bool operator<(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs.toFloat() < rhs.toFloat());
}

bool operator>(const Fixed &lhs, const Fixed &rhs)
{
	return (rhs < lhs);
}

bool operator<=(const Fixed &lhs, const Fixed &rhs)
{
	return !(lhs > rhs);
}

bool operator>=(const Fixed &lhs, const Fixed &rhs)
{
	return !(rhs > lhs);
}

bool operator==(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs.toFloat() == rhs.toFloat());
}

bool operator!=(const Fixed &lhs, const Fixed &rhs)
{
	return !(rhs == lhs);
}

Fixed & Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}
Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}
const Fixed & Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}
const Fixed & Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}
