#include <iostream>
#include <fstream>

int	main( int argc, char* argv[] )
{
	std::cout << "Hello world!" << std::endl;

	if (argc == 2)
	{
		std::ifstream	ifs(argv[1], std::ios::in);
		if (ifs.is_open())
		{
			//APAGAR!
			std::string	s;
			while (std::getline(ifs, s))
				std::cout << s << std::endl;
		}
		else
			std::cout << "Unable to open input file" << std::endl;
	}
	return 0;
}