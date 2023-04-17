#include <iostream>
#include "../includes/Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat a;
	Bureaucrat b("Galdo", 50);
	Bureaucrat c( b );
	Bureaucrat d;

	d = b;

	std::cout << c << std::endl;

	try {
		//Bureaucrat e(170);
		Bureaucrat e(0);
	}
	catch(Bureaucrat::GradeTooLowException& err)
	{
		std::cout << "Tried to instatiate a bureaucrat with a too low grade." << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& err)
	{
		std::cout << "Tried to instatiate a bureaucrat with a too high grade." << std::endl;
	}

	// Bureaucrat f = Bureaucrat("Moa", 3);
	// f.incGrade();
	// std::cout << f.getName() << "'s grade = " << f.getGrade() << std::endl;
	// f.incGrade();
	// std::cout << f.getName() << "'s grade = " << f.getGrade() << std::endl;
	// f.incGrade();
	// std::cout << f.getName() << "'s grade = " << f.getGrade() << std::endl;

	Bureaucrat f = Bureaucrat("Moa", 149);
	f.decGrade();
	std::cout << f.getName() << "'s grade = " << f.getGrade() << std::endl;
	f.decGrade();
	std::cout << f.getName() << "'s grade = " << f.getGrade() << std::endl;

	return 0;
}