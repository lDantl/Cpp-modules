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
		Fixed & operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &outStream, const Fixed &fixedToOutput);

#endif