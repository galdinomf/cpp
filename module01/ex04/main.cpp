#include <iostream>
#include <fstream>
#include <string>

int	main( void )
{
	std::string		file_name = "infile";
	std::ifstream	ifs(file_name.c_str(), std::ios::in);
	std::ofstream	ofs;
	std::string		s;
	std::string		s2 = "Sheldon";
	std::string		s3 = "Moacir";
	std::size_t		pos = 0;

	if (ifs.is_open())
	{
		ofs.open((file_name + ".replace").c_str(), std::ios::out | std::ios::trunc);
		while (std::getline(ifs, s))
		{
			pos = s.find(s2);
			while (pos != std::string::npos)
			{
				s.erase(pos, s2.size());
				s.insert(pos, s3);
				pos = s.find(s2);
			}
			ofs << s << std::endl;
		}
	}
	else
		std::cout << "Unable to open input file" << std::endl;
	ifs.close();
	ofs.close();
	return 0;
}