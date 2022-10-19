#include "Bureaucrat.hpp"
#include "Form.hpp"

/* The friend declaration appears in a class body and grants a function or another class
access to private and protected members of the class where the friend declaration appears. 
https://en.cppreference.com/w/cpp/language/friend*/

int	main()
{
	Bureaucrat	*jeanMichel = NULL;

	try
	{
		std::cout << " \e[0;33m****** creation des bureaucrats  ******\e[0m " << std::endl << std::endl;

		jeanMichel = new Bureaucrat("Jean-Michel", 2);
		// jeanMichel = new Bureaucrat("Jean-Michel", 1);  //test 1
		Bureaucrat	jeanPierre("Jean-Pierre", 95);
		Bureaucrat	jeanPascal("Jean-Pascal", 148);
		// Bureaucrat	jeanPascal("Jean-Pascal", 152);   //test 2

		std::cout << jeanMichel->getName() << " a l'echelon " << jeanMichel->getGrade() << std::endl;
		std::cout << jeanPierre.getName() << " a l'echelon " << jeanPierre.getGrade() << std::endl;
		std::cout << jeanPascal.getName() << " a l'echelon " << jeanPascal.getGrade() << std::endl;
		jeanMichel->incGrade();
		std::cout << jeanPascal << std::endl;

		std::cout << " \e[0;33m****** creation des forms  ******\e[0m " << std::endl << std::endl;

		Form	form1("B123A998", 0, 4, 20); 
		Form	form2("H67890D9", 1, 95, 20); // test 3

		std::cout << form1 << std::endl;
		
		// form1.beSigned(*jeanMichel);
		// form2.beSigned(jeanPierre);  //test 4
	
		jeanMichel->signForm(form1);

		jeanPierre.signForm(form2);
	
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	// std::cout << *jeanMichel << std::endl;

	return (0);
}

