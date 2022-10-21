#include "Base.hpp"

int main()
{
	{
		std::cout << "Test pointeur: " << std::endl;
		Base *test;

		test = generate();	
		identify(test);

		delete(test);
	}
	{
		std::cout << "Test reference: " << std::endl;
		Base& test = *generate();	
		identify(test);

		delete(&test);
	}
	return (0);
}