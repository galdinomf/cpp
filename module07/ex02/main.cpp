// #include <iostream>
// #include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

#include <iostream>
#include "Array.hpp"
#include <sstream>

int	main( void )
{
	std::cout << "Hello world!" << std::endl;

	Array<std::string> b(3);

	Array<std::string> b2( b );
	unsigned int i;
	for (i = 0; i < b2.size(); i++)
	{
		std::stringstream ss;
		ss << i;
		b2[i] = b2[i].append(ss.str());
	}

	// std::cout << "b[" << i << "] = " << b2[i] << std::endl;
	std::cout << b.size() << std::endl;

	Array<std::string> b3 = b2;
	
	b2[1] = "banana";
	
	for (i = 0; i < b2.size(); i++)
		std::cout << "b2[" << i << "] = " << b2[i] << std::endl;
	for (i = 0; i < b3.size(); i++)
		std::cout << "b3[" << i << "] = " << b3[i] << std::endl;

	Array<int> a(4);
	for (unsigned int j = 0; j < a.size(); j++)
		std::cout << a[j] << std::endl;
	return 0;
}