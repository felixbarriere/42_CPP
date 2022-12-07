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

		::swap<int>(i, j);
		::swap<double>(f, g);
		::swap<std::string>(s, t);

		std::cout << "i: " << i << ", j: " << j << std::endl;
		std::cout << "f: " << f << ", g: " << g << std::endl;
		std::cout << "s: " << s << ", t: " << t << std::endl;

		std::cout << std::endl << " \e[0;33m****** MIN  ******\e[0m " << std::endl << std::endl;
		std::cout << "min(i, j): " << ::min<int>(i, j) << std::endl;
		std::cout << "min(f, g): " << ::min<double>(f, g) << std::endl;

		std::cout << std::endl << " \e[0;33m****** MAX  ******\e[0m " << std::endl << std::endl;
		std::cout << "max(i, j): " << ::max<int>(i, j) << std::endl;
		std::cout << "max(f, g): " << ::max<double>(f, g) << std::endl;

		std::cout << std::endl << " \e[0;33m****** MIN/MAX string ******\e[0m " << std::endl << std::endl;

		std::string u = "chaine1";
		std::string v = "chaine2";

		std::cout << "u = " << u << ", v = " << v << std::endl;
		std::cout << "min( u, v ) = " << ::min( u, v ) << std::endl;
		std::cout << "max( u, v ) = " << ::max( u, v ) << std::endl;

	}


	return (0);
}
