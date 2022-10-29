#include "Array.hpp"
#include<cstdlib>

int main()
{
	try
	{
		std::cout << std::endl << " \e[0;33m****** test class Array<int>  ******\e[0m " << std::endl << std::endl;

		Array<int> test(10);

		test[0] = 42;
		test[1] = 24;
		test[2] = 36;
		test[3] = 1;

		std::cout << test[0] << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl; }
	try
	{
		std::cout << std::endl << " \e[0;33m****** exception: test class Array<int> index neg  ******\e[0m " << std::endl << std::endl;

		Array<int> test(10);

		test[0] = 42;
		test[1] = 24;
		test[2] = 36;
		test[3] = 1;

		std::cout << test[-2] << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl; }
	try
	{
		std::cout << std::endl << " \e[0;33m****** exception: test class Array<int> index 750  ******\e[0m " << std::endl << std::endl;

		Array<int> test(750);

		test[0] = 42;
		test[1] = 24;
		test[2] = 36;
		test[3] = 1;

		std::cout << test[750] << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl; }
	try
	{
		std::cout << std::endl << " \e[0;33m****** test class Array<double>  ******\e[0m " << std::endl << std::endl;

		Array<double> test(10);

		test[0] = 42.00;
		test[1] = 24.12124;
		test[2] = 36;
		test[3] = 3.14;

		std::cout << test[3] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	try
	{
		std::cout << std::endl << " \e[0;33m****** class Array<double> with empty array  ******\e[0m " << std::endl << std::endl;

		Array<double> test;
		// int* tab = new int[10];

		std::cout << test[1] << std::endl;
		// std::cout << test[3] << std::endl;

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	try
	{
		std::cout << std::endl << " \e[0;33m****** test int*  ******\e[0m " << std::endl << std::endl;

		int* tab = new int[10];

		tab[0] = 42;
		tab[1] = 24;
		tab[2] = 36;
		tab[3] = 1;

		std::cout << tab[0] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	try
	{
		std::cout << std::endl << " \e[0;33m****** test operator =  ******\e[0m " << std::endl << std::endl;

		Array<int> test(10);

		test[0] = 42;
		test[1] = 24;
		test[2] = 36;
		test[3] = 1;

		Array<int> testBis(10);
		testBis = test;

		std::cout << "test[2]:" << test[2] << std::endl;
		std::cout << "testBis[2]:" << testBis[2] << std::endl;

		std::cout << std::endl  << "Modification Test[2]" << std::endl  << std::endl;

		test[2] = 666;

		std::cout << "test[2]:" << test[2] << std::endl;
		std::cout << "testBis[2]:" << testBis[2] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	try
	{
		std::cout << std::endl << " \e[0;33m****** test getSize function  ******\e[0m " << std::endl << std::endl;

		Array<int> test(10);

		test[0] = 42;
		test[1] = 24;
		test[2] = 36;
		test[3] = 1;

		std::cout << test.getSize() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	return (0);
}
