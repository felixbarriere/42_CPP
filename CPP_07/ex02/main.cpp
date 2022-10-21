#include "Array.hpp"

/* #error This file requires compiler and library support 
for the ISO C++ 2011 standard. */
/* essayer à 42 pour la compilation */


int main()
{
	try
	{
		Array<int> my_test();
		Array<int> my_test2(10);
		int* tab = new int[10];

		std::cout << my_test[1] << std::endl;
		std::cout << my_test2[7] << std::endl;
		


		Array<double> test();
		Array<double> test2(10);
		int* tab = new int[10];

		std::cout << my_test[1] << std::endl;
		std::cout << my_test2[7] << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return (0);
}