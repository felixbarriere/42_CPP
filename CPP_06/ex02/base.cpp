#include "Base.hpp"

Base::~Base()
{
}
	
Base* Base::generate(void)
{
	srand ( time(NULL) );

	Base arrayBase[3] = {A(), B(), C()};
	int	index = rand() % 3;

	arrayBase[index]; 

}

void Base::identify(Base* p)
{}

void Base::identify(Base& p)
{}