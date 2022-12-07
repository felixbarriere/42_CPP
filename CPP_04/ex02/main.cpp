#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"


/* Le constructeur de copie par défaut (qui est automatiquement fourni si vous
n'en fournissez pas un vous-même) ne crée que des copies superficielles. */


int	main(void)
{
	/* const AAnimal* Bug = new AAnimal(); 
	==>    doit renvoyer une erreur a la compilation. 
	AAnimal etant abstraite elle ne peut pas etre instanciee. */


	const AAnimal	*AnimalArray[100];

	for (int i = 0; i < 50; i++)
	{
		const AAnimal* d = new Dog();
		AnimalArray[i] = d;
	}
	for (int i = 50; i < 100; i++)
	{
		const AAnimal* c = new Cat();

		AnimalArray[i] = c;
	}

	AnimalArray[4]->makeSound();
	AnimalArray[87]->makeSound();


	AnimalArray[32]->setIdeasArray(87, "I'm a good boy");
	AnimalArray[59]->setIdeasArray(2, "I hate humans");

	std::cout << AnimalArray[32]->getType() << " idea nb 87: " << AnimalArray[32]->getIdeasArray(87) << " " << std::endl;
	std::cout << AnimalArray[59]->getType() << " idea nb 2: " << AnimalArray[59]->getIdeasArray(2) << " " << std::endl;

	for (int i = 0; i < 50; i++)
	{
		delete(AnimalArray[i]);
	}
	for (int i = 50; i < 100; i++)
	{
		delete(AnimalArray[i]);
	}
	return (0);
}