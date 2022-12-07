#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			std::cout << std::endl << " \e[0;33m******  Test Bureaucrats / creation with good grades  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanMichel("Jean-Michel", 3);
			Bureaucrat	jeanPierre("Jean-Pierre", 98);
			Bureaucrat	jeanPascal("Jean-Pascal", 148);

			std::cout << jeanMichel.getName() << " a l'echelon " << jeanMichel.getGrade() << std::endl;
			std::cout << jeanPierre.getName() << " a l'echelon " << jeanPierre.getGrade() << std::endl;
			std::cout << jeanPascal.getName() << " a l'echelon " << jeanPascal.getGrade() << std::endl;

			jeanMichel.incGrade();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m******  Test Bureaucrats / creation with a grade too high  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanMichel("Jean-Michel", 0);

			std::cout << jeanMichel.getName() << " a l'echelon " << jeanMichel.getGrade() << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m******  Test Bureaucrats / creation with a grade too low  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanMichel("Jean-Michel", 151);

			std::cout << jeanMichel.getName() << " a l'echelon " << jeanMichel.getGrade() << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m******  Test Bureaucrats / creation with a grade too high after incrementation  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanMichel("Jean-Michel", 2);

			std::cout << jeanMichel.getName() << " a l'echelon " << jeanMichel.getGrade() << std::endl;

			jeanMichel.incGrade();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
