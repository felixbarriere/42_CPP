#include <iostream>
#include <fstream>

int	main(int	ac, char **av)
{

	if (!(ac == 4 && av[1] && av[2] && av[3]))
	{
		std::cout << "Error"  << std::endl << "agrument missing" << std::endl;
		return (0);
	}
	std::string			s1 = av[2];
	std::string			s2 = av[3];
	std::string			fileReplace = av[1];
	fileReplace.insert(fileReplace.size(), ".replace");

	std::ifstream		ifs(av[1]);          //infile stream
	std::ofstream		ofs(fileReplace);
	std::string			occurence;

	ifs >> occurence;
	while (ifs)
	{
		if (!occurence.compare(s1))
		{
			std::cout << "same word" <<  std::endl;
			std::cout << "occurence: " << occurence << std::endl;
			std::cout << "s2: " << s1 << std::endl;
			occurence = s2;
		}
		else if (ifs.eof())
			break ;
		else
			std::cout << "different word" << std::endl;
		ofs << occurence << " ";
		ifs >> occurence;
	}	
	ifs.close();
	ofs.close();

	return (0);
}