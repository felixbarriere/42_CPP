#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


/* Since you cannot instanciate an abstract class; you need to pass it by pointer or by reference*/

int	main()
{
	{
		try
		{
			Bureaucrat	jeanMichel("Jean-Michel", 2);

			std::cout << std::endl << " \e[0;33m******  Test Intern / makeForm function ==> bad Form name  ******\e[0m " << std::endl << std::endl;
			
			Intern	newIntern;
			AForm	*FormTest;

			FormTest = newIntern.makeForm("error", "newTarget");
			
			jeanMichel.signForm(*FormTest);
			jeanMichel.executeForm(*FormTest);
			if (FormTest)
				delete (FormTest);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	jeanMichel("Jean-Michel", 2);

			std::cout << std::endl << " \e[0;33m******  Test Intern / makeForm function ==> PresidentialPardon  ******\e[0m " << std::endl << std::endl;
			
			Intern	newIntern;
			AForm	*FormTest;

			FormTest = newIntern.makeForm("PresidentialPardon", "newTarget");
			
			jeanMichel.signForm(*FormTest);
			jeanMichel.executeForm(*FormTest);
			if (FormTest)
				delete (FormTest);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	jeanMichel("Jean-Michel", 2);

			std::cout << std::endl << " \e[0;33m******  Test Intern / makeForm function ==> RobotomyRequest  ******\e[0m " << std::endl << std::endl;
			
			Intern	newIntern;
			AForm	*FormTest;

			FormTest = newIntern.makeForm("RobotomyRequest", "newTarget");
			
			jeanMichel.signForm(*FormTest);
			jeanMichel.executeForm(*FormTest);
			if (FormTest)
				delete (FormTest);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	jeanMichel("Jean-Michel", 2);

			std::cout << std::endl << " \e[0;33m******  Test Intern / makeForm function ==> ShrubberyCreation  ******\e[0m " << std::endl << std::endl;
			
			Intern	newIntern;
			AForm	*FormTest;

			FormTest = newIntern.makeForm("ShrubberyCreation", "newTarget");
			
			jeanMichel.signForm(*FormTest);
			jeanMichel.executeForm(*FormTest);
			if (FormTest)
				delete (FormTest);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	jeanMichel("Jean-Michel", 148);

			std::cout << std::endl << " \e[0;33m******  Test Intern / Bureaucrat grade too low ******\e[0m " << std::endl << std::endl;
			
			Intern	newIntern;
			AForm	*FormTest;

			FormTest = newIntern.makeForm("ShrubberyCreation", "newTarget");
			
			jeanMichel.signForm(*FormTest);
			jeanMichel.executeForm(*FormTest);
			if (FormTest)
				delete (FormTest);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	jeanMichel("Jean-Michel", 2);

			std::cout << std::endl << " \e[0;33m******  Test Intern / Form not signed ******\e[0m " << std::endl << std::endl;
			
			Intern	newIntern;
			AForm	*FormTest;

			FormTest = newIntern.makeForm("ShrubberyCreation", "newTarget");
			
			jeanMichel.signForm(*FormTest);
			jeanMichel.executeForm(*FormTest);
			if (FormTest)
				delete (FormTest);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}

