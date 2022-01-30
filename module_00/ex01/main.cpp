#include "Phonebook.hpp"

int	main(void)
{
	std::string input;
	PhoneBook	guide;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Please Enter the Command: ";
		input = guide.my_cin();
		for (size_t i = 0; i < input.size(); i++)
			input[i] = toupper(input[i]);
		if (input == "EXIT")
			return 0;
		else if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			guide.add(i++);
		}
		else if (input == "SEARCH")
			guide.search();
		else
			std::cout << "No valid command!" << std::endl;
	}
	return 0;
}