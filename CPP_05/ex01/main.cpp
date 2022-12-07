#include "Bureaucrat.hpp"
#include "Form.hpp"

/* The friend declaration appears in a class body and grants a function or another class
access to private and protected members of the class where the friend declaration appears. 
https://en.cppreference.com/w/cpp/language/friend*/

int	main()
{
	// Bureaucrat	*jeanMichel = NULL;
	{
		try
		{
			std::cout << " \e[0;33m****** test Form: form not signed and grade ok  ******\e[0m " << std::endl << std::endl;

			// jeanMichel = new Bureaucrat("Jean-Michel", 2);
			// std::cout << jeanMichel->getName() << " a l'echelon " << jeanMichel->getGrade() << std::endl;

			Bureaucrat	jeanPierre("Jean-Pierre", 95);

			Form	form1("H67890D9", 0, 95, 20);

			std::cout << form1 << std::endl;
			
			form1.beSigned(jeanPierre);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			std::cout << std::endl << " \e[0;33m****** test Form: form not signed and grade not ok  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanPierre("Jean-Pierre", 95);

			Form	form1("H67890D9", 0, 94, 20); // test 3

			std::cout << form1 << std::endl;
			
			form1.beSigned(jeanPierre);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m****** test fonction BeSigned: form already signed  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanPierre("Jean-Pierre", 95);

			Form	form1("H67890D9", 1, 95, 20); // test 3

			std::cout << form1 << std::endl;
			
			form1.beSigned(jeanPierre);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m****** test fonction SignForm: form signed and grade ok  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanPierre("Jean-Pierre", 95);

			Form	form2("H67890D9", 0, 95, 20);

			jeanPierre.signForm(form2);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m****** test fonction SignForm: form signed and grade not ok  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanPierre("Jean-Pierre", 95);

			Form	form2("H67890D9", 0, 94, 20);

			jeanPierre.signForm(form2);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m******  Test Bureaucrats / test operateur <<  ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanMichel("Jean-Michel", 2);

			std::cout << jeanMichel.getName() << " a l'echelon " << jeanMichel.getGrade() << std::endl;

			std::cout << jeanMichel << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}

