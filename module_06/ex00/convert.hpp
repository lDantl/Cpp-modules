#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <sstream>
# include <string>
# include <iostream>
# include <cctype>

void	print_double(double const& d, int const& precision);
void	print_double(char const& c, int const& precision);
void	print_double(int const& i, int const& precision);
void	print_double(float const& f, int const& precision);

void	print_float(double const& d, int const& precision);
void	print_float(char const& c, int const& precision);
void	print_float(int const& i, int const& precision);
void	print_float(float const& f, int const& precision);

void	print_int(int const& i);
void	print_int(char const& c);
void	print_int(double const& f);
void	print_int(float const& f);

void	print_char(char const& c);
void	print_char(int const& i);
void	print_char(double const& d);
void	print_char(float const& f);


#endif