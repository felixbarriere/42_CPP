#include "utils.hpp"



int main()
{
	{
		int i = 1;
		int j = 2;
		double f = 42.42;
		double g = 21.21;
		std::string s = "hello";
		std::string t = "bonjour";

		std::cout << "i: " << i << ", j: " << j << std::endl;
		std::cout << "f: " << f << ", g: " << g << std::endl;
		std::cout << "s: " << s << ", t: " << t << std::endl;

		std::cout << std::endl << " \e[0;33m****** SWAP  ******\e[0m " << std::endl << std::endl;

		my_swap<int>(i, j);
		my_swap<double>(f, g);
		my_swap<std::string>(s, t);

		std::cout << "i: " << i << ", j: " << j << std::endl;
		std::cout << "f: " << f << ", g: " << g << std::endl;
		std::cout << "s: " << s << ", t: " << t << std::endl;

		std::cout << std::endl << " \e[0;33m****** MIN  ******\e[0m " << std::endl << std::endl;
		std::cout << "min(i, j): " << my_min<int>(i, j) << std::endl;
		std::cout << "min(f, g): " << my_min<double>(f, g) << std::endl;

		std::cout << std::endl << " \e[0;33m****** MIN  ******\e[0m " << std::endl << std::endl;
		std::cout << "max(i, j): " << my_max<int>(i, j) << std::endl;
		std::cout << "max(f, g): " << my_max<double>(f, g) << std::endl;

	}


	return (0);
}