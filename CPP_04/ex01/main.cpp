#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"


/* Le constructeur de copie par défaut (qui est automatiquement fourni si vous
n'en fournissez pas un vous-même) ne crée que des copies superficielles.
Pour prouver que c'est bien une deep copy , modifie la copie et montre que l'original n'a pas changé.*/



int	main(void)
{

	const Animal	*AnimalArray[100];

	for (int i = 0; i < 50; i++)
	{
		const Animal* d = new Dog();
		AnimalArray[i] = d;
	}
	for (int i = 50; i < 100; i++)
	{
		const Animal* c = new Cat();

		AnimalArray[i] = c;
	}

	AnimalArray[4]->makeSound();
	AnimalArray[87]->makeSound();


	AnimalArray[32]->setIdeasArray(87, "I'm a good boy");
	AnimalArray[59]->setIdeasArray(2, "I hate humans");

	std::cout << AnimalArray[32]->getType() << " idea nb 87: " << AnimalArray[32]->getIdeasArray(87) << " " << std::endl;
	std::cout << AnimalArray[59]->getType() << " idea nb 2: " << AnimalArray[59]->getIdeasArray(2) << " " << std::endl;

	AnimalArray[1]->setIdeasArray(1, "test copy");
	std::cout << AnimalArray[1]->getType() << " idea nb 1: " << AnimalArray[1]->getIdeasArray(1) << " " << std::endl;
	std::cout << AnimalArray[2]->getType() << " idea nb 2: " << AnimalArray[2]->getIdeasArray(2) << " " << std::endl;
	std::cout << std::endl;


	Brain* Serge = new Brain();
	Brain* Pierre = new Brain();

	Serge->setIdeasArray(2, "I'm a human");
	std::cout << "idea 2 of Serge:" << Serge->getIdeasArray(2) << " " << std::endl;
	std::cout << "idea 2 of Pierre:" << Pierre->getIdeasArray(2) << " " << std::endl;
	
	*Pierre = *Serge;
	std::cout << "idea 2 of Serge:" << Serge->getIdeasArray(2) << " " << std::endl;
	std::cout << "idea 2 of Pierre:" << Pierre->getIdeasArray(2) << " " << std::endl;
	
	Pierre->setIdeasArray(2, "I'm a robot");
	std::cout << "idea 2 of Serge:" << Serge->getIdeasArray(2) << " " << std::endl;
	std::cout << "idea 2 of Pierre:" << Pierre->getIdeasArray(2) << " " << std::endl;

	delete (Serge);
	delete (Pierre);


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