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
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch( ... ){}
	try{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch( ... ){}
	try{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch( ... ){}
}
