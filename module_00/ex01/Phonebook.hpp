#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <sstream>
#include "Contacts.hpp"

class PhoneBook
{
	private:
			Contacts contact[8];
			int	size;
	public:
			PhoneBook();
			~PhoneBook();
			void search();
			void add(int i);
			std::string my_cin();
};

#endif