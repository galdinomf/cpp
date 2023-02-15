#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) : count(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact(int ind)
{
	std::string	s;

	std::cout << "First name: ";
	std::cin >> s;
	this->contacts[ind].set_first_name(s);
	std::cout << "Last name: ";
	std::cin >> s;
	this->contacts[ind].set_last_name(s);
	std::cout << "Nickname: ";
	std::cin >> s;
	this->contacts[ind].set_nickname(s);
	std::cout << "Phone number: ";
	std::cin >> s;
	this->contacts[ind].set_phone_number(s);
	std::cout << "Darkest secret: ";
	std::cin >> s;
	this->contacts[ind].set_darkest_secret(s);
	this->contacts[ind].id = this->count + 1;
	this->count++;
}

void	PhoneBook::display_contacts_list(void)
{
	std::string	s;
	int	i;

	i = 0;
	while (++i <= this->count)
	{
		std::cout << std::right << std::setw(10) << this->contacts[i - 1].id << " | ";
		s = this->contacts[i - 1].get_first_name().substr(0, 10);
		s[9] = '.';
		std::cout << std::right << std::setw(10) << s << " | ";
		s = this->contacts[i - 1].get_last_name().substr(0, 10);
		s[9] = '.';
		std::cout << std::right << std::setw(10) << s << " | ";
		s = this->contacts[i - 1].get_nickname().substr(0, 10);
		s[9] = '.';
		std::cout << std::right << std::setw(10) << s << " | ";
		std::cout << std::endl;
	}
}


void	PhoneBook::search_contact(void)
{
	std::string	s;
	int	i;

	this->display_contacts_list();
	std::cout << "Index: ";
	std::cin >> i;
	//ft_atoi(s) >> i;
	if ((i > 0) && (i <= this->count))
	{
		std::cout << "First name: " << this->contacts[i - 1].get_first_name() << std::endl;
		std::cout << "Last name: " << this->contacts[i - 1].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->contacts[i - 1].get_nickname() << std::endl;
		std::cout << "Phone number: " << this->contacts[i - 1].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[i - 1].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Index out of range" << std::endl;
}