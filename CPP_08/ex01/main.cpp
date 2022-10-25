#include "Span.hpp"

int main()
{
	{
		Span	array(6);

		array.addNumber(5);
		array.addNumber(42);
		array.addNumber(6);
		array.addNumber(5678);
		array.addNumber(0);
		array.addNumber(-10);
		array.addNumber(-10);
		array.displayArray();

		std::cout << "Longest Span: " << array.longestSpan() << std::endl;

		


	}
	return (0);
}