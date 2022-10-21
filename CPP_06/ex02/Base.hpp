#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include <time.h>
#include <cstdlib>
#include <exception>

class Base
{
	public:
		virtual ~Base();
	

	private:
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};


#endif