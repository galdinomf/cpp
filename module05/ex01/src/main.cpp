#include <iostream>
#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

int	main( void )
{
	Form a;
	Form b("Moa", 50, 10);
	Form c( b );
	Form d;

	try{
		Form f(10, 00);
	}	
	catch(Form::GradeTooHighException& e){
		std::cout << "Tried to instantiate a too high grade form." << std::endl;
	}
	catch(Form::GradeTooLowException& e){
		std::cout << "Tried to instantiate a too low grade form." << std::endl;
	}

	d = b;

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

	Bureaucrat my_bureaucrat(50);
	my_bureaucrat.signForm(d);

	// try { d.beSigned(my_bureaucrat); }
	// catch(Form::GradeTooLowException& e){
	// 	std::cout << "ERROR: Bureaucrat has a too low grade to sign the form." << std::endl;
	// }
	std::cout << d << std::endl;

	return 0;
}