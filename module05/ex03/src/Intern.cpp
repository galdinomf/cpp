#include "../includes/Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Intern default constructor called." << std::endl;
}

Intern::Intern( const Intern & src )
{
	std::cout << "Intern copy constructor called." << std::endl;
	*this = src;
}

Intern&	Intern::operator = ( const Intern & rhs )
{
	std::cout << "Intern copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

Intern::~Intern( void )
{
	std::cout << "Intern destructor called." << std::endl;
}

AForm*	Intern::makeForm( std::string form_name, std::string target_name )
{
	std::string	form_names[] = {"shrubbery form", "robotomy form", "presidential form"};
	int	i;
	AForm* new_form = NULL;

	for (i = 0; i < 3; i++)
		if (form_names[i] == form_name)
			break;
	switch (i){
		case 0:
			new_form = new ShrubberyCreationForm(target_name);
			break;
		case 1:
			new_form = new RobotomyRequestForm(target_name);
			break;
		case 2:
			new_form = new PresidentialPardonForm(target_name);
			break;
		default:
			std::cout << "Form not created (the form name provided doesn't exist)." << std::endl;
			break;
	}
	if (new_form)
		std::cout << "Intern creates " << new_form->getName() << std::endl;
	return new_form;
}