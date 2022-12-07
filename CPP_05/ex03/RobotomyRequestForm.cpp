// #include <random>
#include <cstdlib>
#include <time.h>
#include "RobotomyRequestForm.hpp"


/****************************** constructors *********************/

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 0, 72, 45)
{
	// std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	// std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 0, 72, 45), _target(target)
{
	// std::cout << "\e[0;33mFields Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}


/****************************** Operators *********************/


RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	this->setIs_signed(assign.getIs_signed());
	return (*this);
}


/****************************** Accessors *********************/

const std::string& RobotomyRequestForm::getTarget() const
{
	return _target;
}

/****************************** Functions *********************/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getSigningGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else if (!this->getIs_signed())
	{
		throw AForm::FormNotSigned();
	}
	else
		this->action(this->getTarget());
}

void	RobotomyRequestForm::action(std::string target) const
{
	std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;

	srand(time(0));
	int random = rand();
	// std::cout << random << std::endl;
	if (random % 2 == 0)
		std::cout << target << " has been robotomised successfully" << std::endl;
	else
		std::cout << target << " has failed robotomisation" << std::endl;
}