#include "utils.hpp"



int main()
{
	// std::list<int>	array[] = {2, 42, 7, 9};
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
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		
	return (0);
}