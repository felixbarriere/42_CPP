#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		std::cout << " \e[0;33m****** creation des bureaucrats  ******\e[0m " << std::endl << std::endl;

		Bureaucrat	jeanMichel("Jean-Michel", 2);
		Bureaucrat	jeanPierre("Jean-Pierre", 95);
		Bureaucrat	jeanPascal("Jean-Pascal", 148);

		std::cout << " \e[0;33m****** creation des Shrubbery forms  ******\e[0m " << std::endl;
		std::cout << " \e[0;33m******  Target 1  ******\e[0m " << std::endl << std::endl;


		// ShrubberyCreationForm	myShrub("FirstTarget");
		AForm	*myShrub = new ShrubberyCreationForm("FirstTarget");
		// myShrub->beSigned(jeanMichel); //test 1
		jeanMichel.signForm(*myShrub);
		// myShrub.execute(jeanMichel);
		// jeanMichel.executeForm(*myShrub);
		
		std::cout << std::endl << " \e[0;33m******  Target 2  ******\e[0m " << std::endl << std::endl;


		// RobotomyRequestForm		myRoboto("SecondTarget");
		// myRoboto.beSigned(jeanMichel); //test 2
		// myRoboto.execute(jeanMichel);
		// myRoboto.execute(jeanPascal);  //test3

		std::cout << std::endl << " \e[0;33m******  Target 3  ******\e[0m " << std::endl << std::endl;


		// PresidentialPardonForm	myPresidentialForm("ThirdTarget");
		// myPresidentialForm.beSigned(jeanMichel); //test 4
		// myPresidentialForm.execute(jeanMichel);
		// myPresidentialForm.execute(jeanPascal);  //test 5


		//free();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

