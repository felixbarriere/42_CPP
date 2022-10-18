#include "cast.hpp"

void	ft_displayInt(std::string str)
{
	if (ft_checkMinMax(str) == FALSE)
		throw MinMaxNumber();
	int i = std::atol(str.c_str());

	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	ft_displayDouble(std::string str)
{
	double d = std::strtod(str.c_str(), NULL);

	std::cout << "char: Non displayable" << std::endl;
	if (ft_checkMinMax(str) == FALSE)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: "<<  static_cast<int>(d) << std::endl;
	if (ft_checkMinMaxFloat(str) == FALSE)
		std::cout << "float: overflow" << std::endl;
	else
		std::cout << "float: " <<  static_cast<float>(d) << "f" << std::endl;
	std::cout.precision(std::numeric_limits<double>::digits10);
	if (d - floor(d) == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	ft_displayFloat(std::string str)
{
	if (ft_checkMinMaxFloat(str) == FALSE)
		throw MinMaxNumber();
	float f = std::strtof(str.c_str(), NULL);

	std::cout << "char: *" << std::endl;
	if (ft_checkMinMax(str) == FALSE)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: "<<  static_cast<int>(f) << std::endl;
	std::cout << "float: " <<  f << "f" << std::endl;
	std::cout.precision(std::numeric_limits<double>::digits10);
	if (static_cast<double>(f) - floor(static_cast<double>(f)) == 0)
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ft_displayMessage(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}

void	ft_displayChar(std::string str)
{
	std::cout << "char: " << str << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}