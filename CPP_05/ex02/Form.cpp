#include "Form.hpp"

/****************************** constructors *********************/


AForm::AForm() : _is_signed(0), _gradeToSign(0) , _gradeToExecute(0)
{
	// std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy.getName()), _is_signed(copy.getIs_signed()),
								_gradeToSign(copy.getSigningGrade()), _gradeToExecute(copy.getExecutingGrade())
{
	// std::cout << "\e[0;33mCopy Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(const std::string& name, bool is_signed, const int signingGrade, const int executingGrade)
								: _name(name), _is_signed(is_signed), _gradeToSign(signingGrade), _gradeToExecute(executingGrade)
{	
	if (signingGrade < 1 || executingGrade < 1)
	{
		throw AForm::GradeTooHighException();
	}
	else if (signingGrade > 150 || executingGrade > 150)
	{
		throw AForm::GradeTooLowException();
	}
}


AForm::~AForm()
{
	// std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}


/****************************** Operators *********************/


AForm & 					AForm::operator=(const AForm &assign)
{
	_is_signed = assign.getIs_signed();
	return (*this);
}

std::ostream&			operator<<(std::ostream &os, const AForm &rhs)
{
	os << "AForm " << rhs.getName();
	if (rhs.getIs_signed())
		os << " is signed, ";
	else
		os << " is not signed yet,";
	os << " and needs grade " << rhs.getSigningGrade() << " to be signed and " 
	<< rhs.getExecutingGrade() << " to be executed" << std::endl;
	return (os);
}

/******************************* Accessors *********************/


const std::string& AForm::getName() const
{
	return _name;
}
bool AForm::getIs_signed() const
{
	return _is_signed;
}
int AForm::getSigningGrade() const
{
	return _gradeToSign;
}
int AForm::getExecutingGrade() const
{
	return _gradeToExecute;
}

void AForm::setIs_signed(int is_signed)
{
	this->_is_signed = is_signed;
}


/******************************* Functions *********************/

void		AForm::beSigned(Bureaucrat	bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSigningGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		this->setIs_signed(1);
		std::cout << this->getName() << " has been signed by " << bureaucrat.getName() << std::endl;
	}
}

const char*	AForm::GradeTooLowException::what() const throw()
{ return ("Le grade demande pour signer ou executer est trop bas."); }

const char*	AForm::GradeTooHighException::what() const throw()
{ return ("Le grade demande pour signer ou executer est trop haut."); }

const char*	AForm::FormNotSigned::what() const throw()
{ return ("Il manque une signature au formulaire!"); }