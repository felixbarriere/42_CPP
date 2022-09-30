#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const WrongAnimal* k = new WrongCat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;

	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();


	// std::cout << k->getType() << " says " ;
	// k->makeSound();

	j->setIdeasArray(87, "I'm a good boy");
	i->setIdeasArray(2, "I hate humans");

	std::cout << "idea nb 87: " << j->getIdeasArray(87) << " " << std::endl;
	
	std::cout << "idea nb 2: " << i->getIdeasArray(2) << " " << std::endl;

	delete (j);
	delete (i);
	// delete(k);

	return (0);
}