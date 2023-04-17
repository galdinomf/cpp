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

	try{
	Bureaucrat f = Bureaucrat("Moa", 2);
	f.incGrade();
	std::cout << f.getName() << "'s grade = " << f.getGrade() << std::endl;
	f.incGrade();
	std::cout << f.getName() << "'s grade = " << f.getGrade() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e){std::cout << "Tried to decrease bureaucrat's grade below the minimum" << std::endl;}
	catch(Bureaucrat::GradeTooHighException& e){std::cout << "Tried to increase bureaucrat's grade above the maximum" << std::endl;}

	return 0;
}