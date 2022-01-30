#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <iostream>

class Contacts
{
	private:
			std::string first_name;
			std::string last_name;
			std::string nick_name;
			std::string phone_number;
			std::string dark_secret;
	public:
			void set_f_name(std::string);
			void set_l_name(std::string);
			void set_n_name(std::string);
			void set_p_number(std::string);
			void set_d_secret(std::string);
			std::string get_f_name(void);
			std::string get_l_name(void);
			std::string get_n_name(void);
			std::string get_p_number(void);
			std::string get_d_secret(void);
			Contacts();
			~Contacts();
};

#endif