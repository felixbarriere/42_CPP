#include <iostream>
#include <fstream>

/* .find():
The position of the first character of the first match.
If no matches were found, the function returns string::npos. */

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
	size_t				compResult;
	std::string			lineTemp;

	while (1)
	{

		std::getline(ifs, lineTemp);
		while (1)
		{
			compResult = lineTemp.find(s1);
			if (compResult == std::string::npos)
			{
				ofs << lineTemp;
				break ;
			}
			else if (compResult != std::string::npos)
			{
				ofs << lineTemp.substr(0, compResult);
				ofs << s2;
				lineTemp = lineTemp.substr(compResult + s1.size());
			}
		}	
		if (ifs.eof())
			break;
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();

	return (0);
}
