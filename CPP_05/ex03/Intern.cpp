// #include <random>
#include <cstdlib>
#include <time.h>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


/****************************** constructors *********************/

Intern::Intern()
{
	// std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	// std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
	*this = copy;
}

Intern::~Intern()
{
	// std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


/****************************** Operators *********************/


Intern & Intern::operator=(const Intern &assign)
{
	(void)assign;
	return (*this);
}

/****************************** Functions *********************/


AForm*	Intern::makeForm(std::string formName,std::string formTarget) const
{
	AForm	*arrayAform[3] = { new ShrubberyCreationForm(formTarget), new RobotomyRequestForm(formTarget), new PresidentialPardonForm(formTarget)};
	std::string		str[3] = { "ShrubberyCreation" , "RobotomyRequest" , "PresidentialPardon"};

	for (int i = 0; i < 3; i++)  
	{
		if (!formName.compare(str[i]))
		{
			std::cout << "Intern creates " << str[i] << " form." << std::endl;
			switch(i)
			{
				case 0: 
				{
					delete (arrayAform[1]);
					delete (arrayAform[2]);
					return (arrayAform[0]);
				}
				case 1: 
				{
					delete (arrayAform[0]);
					delete (arrayAform[2]);
					return (arrayAform[1]);
				}
				case 2: 
				{
					delete (arrayAform[0]);
					delete (arrayAform[1]);
					return (arrayAform[2]);
				}
			}
		}
	}
	delete (arrayAform[0]);
	delete (arrayAform[1]);
	delete (arrayAform[2]);
	throw Intern::FormNameIncorrect();
	return (NULL);
}	

const char*	Intern::FormNameIncorrect::what() const throw()
{ return ("Form name is incorrect!\n{ShrubberyCreation , RobotomyRequest , PresidentialPardon}"); }
