#include "Contacts.hpp"

Contacts::Contacts(){}

Contacts::~Contacts(){}

void Contacts::set_f_name(std::string f_name)
{
	first_name = f_name;
}

void Contacts::set_l_name(std::string l_name)
{
	last_name = l_name;
}

void Contacts::set_n_name(std::string n_name)
{
	nick_name = n_name;
}

void Contacts::set_p_number(std::string t_number)
{
	phone_number = t_number;
}

void Contacts::set_d_secret(std::string d_secret)
{
	dark_secret = d_secret;
}

std::string Contacts::get_f_name()
{
	return first_name;
}

std::string Contacts::get_l_name()
{
	return last_name;
}

std::string Contacts::get_n_name()
{
	return nick_name;
}

std::string Contacts::get_p_number()
{
	return phone_number;
}

std::string Contacts::get_d_secret()
{
	return dark_secret;
}
