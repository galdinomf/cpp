#include <iostream>
#include "iter.hpp"

void	inc(int* n)
{
	*n += 1;
}

void	char_up(char* c)
{
	*c = toupper(*c);
}

template <typename T>
void	put_t(T t)
{
	std::cout << t << std::endl;
}

int	main( void )
{
	std::cout << "incrementing array of int" << std::endl;
	int a[] = {0, 1, 2, 3};
	::iter(a, 4, inc);
	for (int i = 0; i < 4; i++)
		std::cout << a[i] << std::endl;

	std::cout << "capitalizing array of char" << std::endl;
	char c[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	::iter(c, 6, char_up);
	for (int i = 0; i < 6; i++)
		std::cout << c[i] << std::endl;
	
	::iter(c, 6, put_t);
	return 0;
}