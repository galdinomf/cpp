#include <iostream>
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

int	main( void )
{
	PresidentialPardonForm a("home");
	PresidentialPardonForm b("Moa");
	PresidentialPardonForm c( b );
	PresidentialPardonForm d = b;

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

	Bureaucrat my_bureaucrat("Galdo", 3);
	

	try { my_bureaucrat.signForm(d); }
	catch(PresidentialPardonForm::GradeTooLowException& e){
		std::cout << "ERROR: Bureaucrat has a too low grade to sign the PresidentialPardonForm." << std::endl;
	}

	my_bureaucrat.executeForm(d);
	std::cout << d << std::endl;

	return 0;
}