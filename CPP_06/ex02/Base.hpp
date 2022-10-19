#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include <time.h>

class Base
{
	public:
		virtual ~Base();
	
		Base* generate(void);
		void identify(Base* p);
		void identify(Base& p);

	private:
};

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