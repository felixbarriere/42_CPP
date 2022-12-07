// #include <random>
#include <cstdlib>
#include <time.h>
#include "PresidentialPardonForm.hpp"


/****************************** constructors *********************/

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 0, 25, 5)
{
	// std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	// std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 0, 25, 5), _target(target)
{
	// std::cout << "\e[0;33mFields Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}


/****************************** Operators *********************/


PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	this->setIs_signed(assign.getIs_signed());
	return (*this);
}


/****************************** Accessors *********************/

const std::string& PresidentialPardonForm::getTarget() const
{
	return _target;
}

/****************************** Functions *********************/


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
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

void	PresidentialPardonForm::action(std::string target) const
{
	std::cout << target << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}