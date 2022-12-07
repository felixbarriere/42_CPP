#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* Since you cannot instanciate an abstract class; you need to pass it by pointer or by reference*/

int	main()
{
	{
		try
		{
			std::cout << std::endl << " \e[0;33m******  Test ShrubberyCreationForm / RobotomyRequestForm / PresidentialPardonForm ******\e[0m " << std::endl;
			std::cout << " \e[0;33m******  some with beSigned() / Execute(), some with signForm() / executeForm()ls ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanMichel("Jean-Michel", 2);

			ShrubberyCreationForm	myShrub("FirstTarget");
			jeanMichel.signForm(myShrub);
			jeanMichel.executeForm(myShrub);

			std::cout << std::endl;

			RobotomyRequestForm		myRoboto("SecondTarget");
			myRoboto.beSigned(jeanMichel);
			myRoboto.execute(jeanMichel);

			std::cout << std::endl;

			PresidentialPardonForm	myPresidentialForm("ThirdTarget");
			myPresidentialForm.beSigned(jeanMichel);
			myPresidentialForm.execute(jeanMichel);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m****** Grade too low except for Shrubbery ******\e[0m " << std::endl << std::endl;

			Bureaucrat	jeanMichel("Jean-Michel", 145);

			ShrubberyCreationForm	myShrub("FirstTarget");
			jeanMichel.signForm(myShrub);
			jeanMichel.executeForm(myShrub);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << " \e[0;33m****** Form not signed ******\e[0m " << std::endl << std::endl;


			Bureaucrat	jeanMichel("Jean-Michel", 2);

			ShrubberyCreationForm	myShrub("FirstTarget");
			jeanMichel.executeForm(myShrub);

			RobotomyRequestForm		myRoboto("SecondTarget");
			myRoboto.execute(jeanMichel);

			PresidentialPardonForm	myPresidentialForm("ThirdTarget");
			myPresidentialForm.execute(jeanMichel);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}

