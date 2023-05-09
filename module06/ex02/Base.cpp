#include "header.h"

Base::~Base( void )
{
	std::cout << "Base destructor called." << std::endl;
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p)){
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p)){
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p)){
		std::cout << "C" << std::endl;
		return ;
	}
}

void	Base::identify(Base& p)
{
	try{
		A& a = dynamic_cast<A&>(p);
		(void)	a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch( ... ){}
	try{
		B& b = dynamic_cast<B&>(p);
		(void)	b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch( ... ){}
	try{
		C& c = dynamic_cast<C&>(p);
		(void)	c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch( ... ){}
}
