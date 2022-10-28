#include "iter.hpp"

int main()
{
		std::cout << std::endl << " \e[0;33m****** TEST string  ******\e[0m " << std::endl << std::endl;

		std::string tab[]= {"hello", "bonjour", "hola"};
		iter(tab, 3, my_putstr);

		std::cout << std::endl << " \e[0;33m****** TEST double  ******\e[0m " << std::endl << std::endl;

		double tab2[]= { 8.23, 24.42, 32.21};
		
		iter(tab2, 3, my_double<double>);

		std::cout << std::endl << " \e[0;33m****** TEST int  ******\e[0m " << std::endl << std::endl;

		int tab3[]= { 4, 42, 21};
		
		iter(tab3, 3, my_double<int>);

	return (0);
}
