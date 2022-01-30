#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	std::cout << "Hello!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Bye!" << std::endl;
}

std::string PhoneBook::my_cin()
{
	std::string input;

	std::getline(std::cin, input);
	if (std::cin.eof() == true)
		exit(1);
	return (input);
}

void PhoneBook::add(int i)
{
	if (size < 8)
		size++;
	std::cout << "Enter the First name: ";
	contact[i].set_f_name(my_cin());
	std::cout << "Enter the Last name: ";
	contact[i].set_l_name(my_cin());
	std::cout << "Enter the Nickname: ";
	contact[i].set_n_name(my_cin());
	std::cout << "Enter the Phone number: ";
	contact[i].set_p_number(my_cin());
	std::cout << "Enter the Darkest Secret: ";
	contact[i].set_d_secret(my_cin());
}

static std::string ft_dot(std::string str)
{
	if (str.size() >= 10)
	{
		str[9] = '.';
		str.erase(10);
	}
	return str;
}

void PhoneBook::search()
{
	std::string input;
	int index = 0;

	if (size == 0)
	{
		std::cout << "There's no Contact to Search.." << std::endl;
		return ;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|"
		<< std::setw(10) << ft_dot(contact[i].get_f_name()) << "|"
		<< std::setw(10) << ft_dot(contact[i].get_l_name()) << "|"
		<< std::setw(10) << ft_dot(contact[i].get_n_name()) << "|"
		<< std::endl;
	}
	while (true)
	{
		std::cout << "Please Enter the Index: ";
		input = my_cin();
		std::stringstream ss_int(input);
		ss_int >> index;
		if (index < 1 || index > size)
		{
			std::cout << "Cannot find this Index..Please try again!" << std::endl;
			continue ;
		}
		std::cout << "No. " << index-- << std::endl;
		std::cout << "1. First Name: " << contact[index].get_f_name() << std::endl;
		std::cout << "2. Last Name: " << contact[index].get_l_name() << std::endl;
		std::cout << "3. Nickname: " << contact[index].get_n_name() << std::endl;
		std::cout << "4. Phone Number: " << contact[index].get_p_number() << std::endl;
		std::cout << "5. Darkest Secret: " << contact[index].get_d_secret() << std::endl;
		break ;
	}
}