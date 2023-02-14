#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		int			id;

		void		set_first_name(std::string s);
		std::string	get_first_name(void);
		void		set_last_name(std::string s);
		std::string	get_last_name(void);
		void		set_nickname(std::string s);
		std::string	get_nickname(void);
		void		set_phone_number(std::string s);
		std::string	get_phone_number(void);
		void		set_darkest_secret(std::string s);
		std::string	get_darkest_secret(void);
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif