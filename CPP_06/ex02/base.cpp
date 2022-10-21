#include "Base.hpp"

Base::~Base()
{
}
	
Base* generate(void)
{
	srand ( time(NULL) );
	int	index = rand() % 3;
	// std::cout << index << std::endl;

	if (index == 0)
		return (new A());
	else if (index == 1)
		return (new B());
	else if (index == 2)
		return (new C());
	else
		return (NULL);
}

void identify(Base* p)
{
	Base* a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "C" << std::endl;
	Base* b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	Base* c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void identify(Base& p)  //les references ne peuvent etre NULL, test avec try/catch
{
	try
	{
		Base a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}