#include <iostream>
#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}

// #include <iostream>
// #include "iter.hpp"

// void	inc(int* n)
// {
// 	*n += 1;
// }

// void	char_up(char* c)
// {
// 	*c = toupper(*c);
// }

// template <typename T>
// void	put_t(T t)
// {
// 	std::cout << *t << std::endl;
// }

// int	main( void )
// {
// 	std::cout << "incrementing array of int" << std::endl;
// 	int a[] = {0, 1, 2, 3};
// 	::iter(a, 4, inc);
// 	for (int i = 0; i < 4; i++)
// 		std::cout << a[i] << std::endl;

// 	std::cout << "capitalizing array of char" << std::endl;
// 	char c[] = {'a', 'b', 'c', 'd', 'e', 'f'};
// 	::iter(c, 6, char_up);
// 	for (int i = 0; i < 6; i++)
// 		std::cout << c[i] << std::endl;
	
// 	std::cout << "Using function template to print array of chars out:" << std::endl;
// 	::iter(c, 6, put_t);

// 	std::cout << "Using function template to print array of integers out:" << std::endl;
// 	::iter(a, 4, put_t);
// 	return 0;
// }