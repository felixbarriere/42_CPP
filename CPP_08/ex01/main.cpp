#include "Span.hpp"

int main()
{
	{
		std::cout << " \e[0;33m****** Longest Span ok /Shortest Span ok ******\e[0m " << std::endl << std::endl;
		try
		{
			Span	array(10);
		
			array.addNumber(5);
			array.addNumber(214);
			array.addNumber(0);
			array.addNumber(56789);
			array.addNumber(1);
			array.addNumber(-21447);
			array.addNumber(-10);
			array.displayArray();

			std::cout << std::endl << "Longest Span: " << array.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << array.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << " \e[0;33m****** Too many numbers  ******\e[0m " << std::endl << std::endl;
		try
		{
			Span	array(6);
		
			array.addNumber(5);
			array.addNumber(42);
			array.addNumber(6);
			array.addNumber(5678);
			array.addNumber(0);
			array.addNumber(-10);
			array.addNumber(-20);
			array.displayArray();

			std::cout << "Longest Span: " << array.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << " \e[0;33m****** Only one number ******\e[0m " << std::endl << std::endl;
		try
		{
			Span	array(6);
		
			array.displayArray();
			array.addNumber(5);

			std::cout << "Longest Span: " << array.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << " \e[0;33m****** test 10000 nombres  ******\e[0m " << std::endl << std::endl;
		try
		{
			Span	array(10000);
			srand(time(NULL));

			for (int i = 0; i < 10000; i++)
			{
				array.addNumber(rand() % 10000);
			}
			std::cout << "Longest Span: " << array.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << array.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << " \e[0;33m****** test fillSpan(Iterators)  ******\e[0m " << std::endl << std::endl;
		try
		{
			std::vector<int>	tab;
			
			tab.push_back(10);
			tab.push_back(3225);
			tab.push_back(3);
			tab.push_back(-876);
			tab.push_back(5);
			tab.push_back(42);
			
			Span	array(8);

			array.fillSpan(tab.begin(), tab.end(), tab.size());
			array.displayArray();
			std::cout << "Longest Span: " << array.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << array.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
