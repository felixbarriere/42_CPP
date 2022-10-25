#include "Span.hpp"

int main()
{
	{
		std::cout << " \e[0;33m****** Longest Span ok  ******\e[0m " << std::endl << std::endl;
		try
		{
			Span	array(6);
		
			array.addNumber(5);
			array.addNumber(42);
			array.addNumber(7);
			array.addNumber(5678);
			array.addNumber(0);
			// array.addNumber(-10);
			array.displayArray();

			std::cout << "Longest Span: " << array.longestSpan() << std::endl;
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
	return (0);
}