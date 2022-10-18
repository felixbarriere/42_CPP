#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	unsigned int u;
	u = reinterpret_cast<uintptr_t>(ptr);

	std::cout << "test"<< std::endl;


	return (u);
}

Data* deserialize(uintptr_t raw)
{
	// Data *data;
	std::cout << "test2" << std::endl;

	// data = reinterpret_cast<Data*>(raw);
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data data;

	data.i = 42;
	std::cout << "data: " << data.i << std::endl;
	
	uintptr_t u = serialize(&data);

	data = *deserialize(u);
	std::cout << "test3"<< std::endl;

	// Data	*data2 = deserialize(u);

	std::cout << "data: " << data.i << std::endl;

	(void)u;
	// (void)data2;
	return (0);
}