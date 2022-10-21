#include "Data.hpp"

/* serialize: process of translating a data structure or object state into a format that can be stored 
(for example, in a file or memory data buffer) or transmitted (for example, over a computer network)
and reconstructed later (possibly in a different computer environment). */

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	std::cout << " \e[0;33m****** Creation Data  ******\e[0m " << std::endl << std::endl;

	Data data;

	data.i = 42;
	std::cout << "data int: " << data.i << std::endl;
	std::cout << "data adress: " << &data << std::endl;
	
	std::cout << std::endl << " \e[0;33m****** SERIALIZATION  ******\e[0m " << std::endl << std::endl;

	uintptr_t u = serialize(&data);

	std::cout << " \e[0;33m****** DESERIALIZATION of the same instance of Data ******\e[0m " << std::endl << std::endl;


	data = *deserialize(u);

	std::cout << "data int: " << data.i << std::endl;
	std::cout << "data adress: " << &data << std::endl;

	std::cout << std::endl <<  " \e[0;33m****** DESERIALIZATION of another instance of Data ******\e[0m " << std::endl << std::endl;

	Data data2 = *deserialize(u);
	std::cout << "data int: " << data.i << std::endl;
	std::cout << "data2 adress: " << &data2 << std::endl;

	return (0);
}