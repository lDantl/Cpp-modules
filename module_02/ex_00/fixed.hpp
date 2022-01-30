#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
	private:
		int					fixedPointValue;
		static const int	numberOfFractalBits;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);	
};

#endif