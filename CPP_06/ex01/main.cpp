#include "Data.hpp"

/*  process of translating a data structure or object state into a format that can be stored 
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
	Data data;

	data.i = 42;
	std::cout << "data: " << data.i << std::endl;
	std::cout << "data adress: " << &data << std::endl;
	
	uintptr_t u = serialize(&data);

	data = *deserialize(u);

	std::cout << "data: " << data.i << std::endl;
	std::cout << "data adress: " << &data << std::endl;

	Data data2 = *deserialize(u);
	std::cout << "data2 adress: " << &data2 << std::endl;

	return (0);
}