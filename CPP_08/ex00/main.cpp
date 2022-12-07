#include "utils.hpp"

int main()
{
	{
		std::cout << std::endl << " \e[0;33m****** Test element in list ******\e[0m " << std::endl << std::endl;

		std::vector<int>	array;
		
		array.push_back(2);
		array.push_back(42);
		array.push_back(7);
		array.push_back(9);
		try
		{
			easyfind(array, 42);
			std::cout << "TRUE" << std::endl;
		}
		catch (const NotInList& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << " \e[0;33m****** Test element not in list ******\e[0m " << std::endl << std::endl;

		std::vector<int>	array;
		
		array.push_back(2);
		array.push_back(42);
		array.push_back(7);
		array.push_back(9);
		try
		{
			easyfind(array, 10);
			std::cout << "TRUE" << std::endl;
		}
		catch (const NotInList& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << " \e[0;33m****** Test element double not in list ******\e[0m " << std::endl << std::endl;

		std::vector<double>	array;
		
		array.push_back(2.42);
		array.push_back(42.42);
		array.push_back(7.98);
		array.push_back(9.987654);
		try
		{
			easyfind(array, 42);
			std::cout << "TRUE" << std::endl;
		}
		catch (const NotInList& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
