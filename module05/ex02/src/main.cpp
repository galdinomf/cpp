#include <iostream>
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

int	main( void )
{
	ShrubberyCreationForm a("home");
	ShrubberyCreationForm b("Moa");
	ShrubberyCreationForm c( b );
	ShrubberyCreationForm d = b;

	// try{
	// 	ShrubberyCreationForm f(10, 00);
	// }	
	// catch(ShrubberyCreationForm::GradeTooHighException& e){
	// 	std::cout << "Tried to instantiate a too high grade ShrubberyCreationForm." << std::endl;
	// }
	// catch(ShrubberyCreationForm::GradeTooLowException& e){
	// 	std::cout << "Tried to instantiate a too low grade ShrubberyCreationForm." << std::endl;
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

	// Bureaucrat my_bureaucrat(50);
	// my_bureaucrat.signForm(d);

	// try { d.beSigned(my_bureaucrat); }
	// catch(ShrubberyCreationForm::GradeTooLowException& e){
	// 	std::cout << "ERROR: Bureaucrat has a too low grade to sign the ShrubberyCreationForm." << std::endl;
	// }
	std::cout << d << std::endl;

	return 0;
}