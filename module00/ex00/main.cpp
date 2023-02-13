#include <iostream>
#include <cstring>

int	main(int argc, char *argv[])
{
	int			i;
	int			j;
	std::string	str;

	str = "";
	if (argc == 1)
		str += "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < argc)
	{
		
		j = -1;
		while (++j < (int) strlen(argv[i]))
			argv[i][j] = toupper(argv[i][j]);
		str += argv[i];
	}
	std::cout << str << std::endl;
	return (0);
}