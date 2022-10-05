#include <iostream>
#include <string>
#include <locale>

int	main(int ac, char **av)
{
	std::string my_string;
	std::locale loc;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i]; i++)
		{
			my_string.assign(av[i]);
			for (int i = 0; (unsigned long)i < my_string.length(); i++)
				std::cout << std::toupper(my_string[i], loc);
			// std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}
