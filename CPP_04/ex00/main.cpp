#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;

	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// std::cout << k->getType() << " says " ;
	// k->makeSound();

	

	delete(meta);
	delete (j);
	delete (i);
	delete(k);

	return (0);
}