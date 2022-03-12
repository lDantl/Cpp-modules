#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed
{
	private:
		int					fixedPointValue;
		static const int	numberOfFractalBits;

	public:
		Fixed(void);
		Fixed(int value);
		Fixed(float value);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed &operator=(Fixed const & rhs);
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);
		Fixed operator++(int);
		Fixed &operator++(void);
		Fixed operator--(int);
		Fixed &operator--(void);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static Fixed &min(Fixed &lhs,Fixed &rhs);
		static const Fixed &max(const Fixed &lhs, const Fixed &rhs);
		static const Fixed &min(const Fixed &lhs, const Fixed &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &outStream, const Fixed &fixedToOutput);
bool operator==(const Fixed &lhs, const Fixed &rhs);
bool operator!=(const Fixed &lhs, const Fixed &rhs);
bool operator<=(const Fixed &lhs, const Fixed &rhs);
bool operator>=(const Fixed &lhs, const Fixed &rhs);
bool operator>(const Fixed &lhs, const Fixed &rhs);
bool operator<(const Fixed &lhs, const Fixed &rhs);


#endif