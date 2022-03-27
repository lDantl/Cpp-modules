#include "karen.hpp"

int	main(int argc, char **argv)
{
	Karen	k;

	if (argc != 2)
		return (1);
	// std::cout << "[ " << argv[1] << " ]" << '\n' << '\n';
	k.complain(argv[1]);
	return (0);
}
