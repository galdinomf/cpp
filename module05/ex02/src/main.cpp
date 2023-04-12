#include <iostream>
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"

int	main( void )
{
	RobotomyRequestForm a("home");
	PresidentialPardonForm b("Moa");
	PresidentialPardonForm c( b );
	PresidentialPardonForm d = b;
	ShrubberyCreationForm s("ball");

	// try{
	// 	PresidentialPardonForm f(10, 00);
	// }	
	// catch(PresidentialPardonForm::GradeTooHighException& e){
	// 	std::cout << "Tried to instantiate a too high grade PresidentialPardonForm." << std::endl;
	// }
	// catch(PresidentialPardonForm::GradeTooLowException& e){
	// 	std::cout << "Tried to instantiate a too low grade PresidentialPardonForm." << std::endl;
	// }

	std::cout << " --------------------------------------- " << std::endl;
	std::cout << "Outstreaming a:" << std::endl;
	std::cout << a << std::endl;
	std::cout << "Outstreaming b:" << std::endl;
	std::cout << b << std::endl;
	std::cout << "Outstreaming c:" << std::endl;
	std::cout << c << std::endl;
	std::cout << "Outstreaming d:" << std::endl;
	std::cout << d << std::endl;
	std::cout << " --------------------------------------- " << std::endl;

	Bureaucrat my_bureaucrat("Galdo", 150);
	

	my_bureaucrat.signForm(d);
	my_bureaucrat.executeForm(d);
	

	my_bureaucrat.signForm(a);
	my_bureaucrat.executeForm(a);

	my_bureaucrat.signForm(s);
	my_bureaucrat.executeForm(s);

	return 0;
}