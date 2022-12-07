#include <iostream>
#include <fstream>
#include <sys/stat.h>

/* .find():
returns the position of the first character of the first match.
If no matches were found, the function returns string::npos. */

/* https://www.systutorials.com/how-to-test-a-file-or-directory-exists-in-c/ */

int	main(int	ac, char **av)
{

	if (!(ac == 4 && av[1] && av[2] && av[3]))
	{
		std::cerr << "Error"  << std::endl << "wrong agrument number" << std::endl;
		return (0);
	}
	std::ifstream		ifs(av[1]);
	struct stat 		path_stat;
	stat(av[1], &path_stat);
	if (!ifs || (S_ISREG(path_stat.st_mode) == 0))
	{
		std::cerr << "Error"  << std::endl << "file not found or arg is a directory" << std::endl;
		return (0);
	}
	std::string			s1 = av[2];
	if (!s1.compare(""))
	{
		std::cerr << "Error"  << std::endl << "cannot check for an empty string" << std::endl;
		return (0);
	}
	std::string			s2 = av[3];
	std::string			fileReplace = av[1];
	fileReplace.insert(fileReplace.size(), ".replace");
	std::ofstream		ofs(fileReplace);
	size_t				compResult;
	std::string			lineTemp;
	std::string			lineGlobal;

	while (!ifs.eof())
	{
		std::getline(ifs, lineTemp);
		lineGlobal.append(lineTemp);
		lineGlobal.append("\n");
	}
	lineGlobal.pop_back();
	while (1)
	{
		compResult = lineGlobal.find(s1);
		if (compResult != std::string::npos)
		{
			ofs << lineGlobal.substr(0, compResult);
			ofs << s2;
			lineGlobal = lineGlobal.substr(compResult + s1.size());
		}
		else
		{
			ofs << lineGlobal;
			break ;
		}
	}	
	ifs.close();
	ofs.close();

	return (0);
}
