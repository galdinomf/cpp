#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::set_first_name(std::string s)
{
	this->_first_name = s;
};

std::string	Contact::get_first_name(void)
{
	return this->_first_name;
};

void	Contact::set_last_name(std::string s)
{
	this->_last_name = s;
};

std::string	Contact::get_last_name(void)
{
	return this->_last_name;
};

void	Contact::set_nickname(std::string s)
{
	this->_nickname = s;
};

std::string	Contact::get_nickname(void)
{
	return this->_nickname;
};

void	Contact::set_phone_number(std::string s)
{
	this->_phone_number = s;
};

std::string	Contact::get_phone_number(void)
{
	return this->_phone_number;
};

void	Contact::set_darkest_secret(std::string s)
{
	this->_darkest_secret = s;
};

std::string	Contact::get_darkest_secret(void)
{
	return this->_darkest_secret;
};