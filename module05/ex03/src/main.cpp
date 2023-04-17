#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Intern.hpp"

int	main( void )
{
	Intern	someRandomIntern;
	AForm	*rrf;
	Bureaucrat	b("Galdo", 3);

//	rrf = someRandomIntern.makeForm("robotomy form", "Moa");
//	rrf = someRandomIntern.makeForm("shrubbery form", "Moa");
	rrf = someRandomIntern.makeForm("presidential form", "Moa");
	// rrf = someRandomIntern.makeForm("non-existent form", "Moa");

	if (rrf) {
		b.signForm(*rrf);
		b.executeForm(*rrf);
		delete rrf;
	}
	return 0;
}