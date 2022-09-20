#include <iostream>

/* l’opérateur static_cast permet de faire une conversion 
explicite d’un type vers un autre */

char	*my_toupper(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	(void)av;
	int		i;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i])
		{
			std::cout << my_toupper(av[i]) << ' ';
			i++;
		}
		std::cout << std::endl;
	}
	return (0);

}