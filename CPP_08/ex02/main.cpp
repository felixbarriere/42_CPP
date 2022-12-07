#include "MutantStack.hpp"

/* You can only have a template class definition in a cpp file
if it's a specialized definition - i.e. you know what T is. 

On va chercher les iterateurs dans le underlying container (deque), qui est une classe parente
de Stack */

int main()
{
	{
		std::cout << std::endl << " \e[0;33m****** Test MutantStack ******\e[0m " << std::endl << std::endl;
	
		MutantStack<int>	test;

		
		std::cout << "test.empty(): " << test.empty() << std::endl;
		test.push(42);
		test.push(24);
		test.push(3);
		std::cout << "test.empty(): " << test.empty() << std::endl;
		std::cout << "test.size(): " << test.size() << std::endl;
		test.pop();
		std::cout << "test.size(): " << test.size() << std::endl;

		for (MutantStack<int>::iterator it = test.begin(); it != test.end(); it++)
		{
			std::cout << "Array:" << *it << std::endl;
		}

	}
	{
		std::cout << std::endl << " \e[0;33m****** Test List (with iterators)  ******\e[0m " << std::endl << std::endl;

		std::list<int>	test;

		std::cout << "test.empty(): " << test.empty() << std::endl;
		test.push_back(42);
		test.push_back(24);
		test.push_back(3);
		std::cout << "test.empty(): " << test.empty() << std::endl;
		std::cout << "test.size(): " << test.size() << std::endl;
		test.pop_back();
		std::cout << "test.size(): " << test.size() << std::endl;

		for (std::list<int>::iterator it = test.begin(); it != test.end(); it++)
		{
			std::cout << "Array:" << *it << std::endl;
		}
	}
	{
		std::cout << std::endl << " \e[0;33m****** Test Stack  ******\e[0m " << std::endl << std::endl;

		std::stack<int>	test;

		std::cout << "test.empty(): " << test.empty() << std::endl;
		test.push(42);
		test.push(24);
		test.push(3);
		std::cout << "test.empty(): " << test.empty() << std::endl;
		std::cout << "test.size(): " << test.size() << std::endl;
		test.pop();
		std::cout << "test.size(): " << test.size() << std::endl;

	}
	{
		std::cout << std::endl << " \e[0;33m****** Test Main Sujet  ******\e[0m " << std::endl << std::endl;

		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "mstack.top(): " << mstack.top() << std::endl;

		mstack.pop();
		
		std::cout << "mstack.size(): " << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "*it: " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	return (0);
}