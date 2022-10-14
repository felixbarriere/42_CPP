#include "Bureaucrat.hpp"

/* The friend declaration appears in a class body and grants a function or another class
access to private and protected members of the class where the friend declaration appears. 
https://en.cppreference.com/w/cpp/language/friend*/

int	main()
{
	try
	{
		Bureaucrat	jeanMichel("Jean-Michel", 3);
		// Bureaucrat	jeanMichel("Jean-Michel", 1);  //test 1
		Bureaucrat	jeanPierre("Jean-Pierre", 98);
		Bureaucrat	jeanPascal("Jean-Pascal", 148);
		// Bureaucrat	jeanPascal("Jean-Pascal", 152);   //test 2


		std::cout << jeanMichel.getName() << " a l'echelon " << jeanMichel.getGrade() << std::endl;
		std::cout << jeanPierre.getName() << " a l'echelon " << jeanPierre.getGrade() << std::endl;
		std::cout << jeanPascal.getName() << " a l'echelon " << jeanPascal.getGrade() << std::endl;

		jeanMichel.incGrade();
	
		std::cout << jeanPascal << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
