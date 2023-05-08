#include "header.h"

Base * generate(void)
{
	Base* b;

	srand (time(NULL));
	float p = (float) rand() / (float) RAND_MAX;
	
	if (p < 0.33)
		b = new A();
	else if (p < 0.66)
		b = new B();
	else
		b = new C();
	return b;
}