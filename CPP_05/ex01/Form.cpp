#include "Form.hpp"

/****************************** constructors *********************/


Form::Form() : _is_signed(0), _gradeToSign(0) , _gradeToExecute(0)
{
	// std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _is_signed(copy.getIs_signed()),
								_gradeToSign(copy.getSigningGrade()), _gradeToExecute(copy.getExecutingGrade())
{
	// std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string& name, bool is_signed, const int signingGrade, const int executingGrade)
								: _name(name), _is_signed(is_signed), _gradeToSign(signingGrade), _gradeToExecute(executingGrade)
{
	if (signingGrade < 1 || executingGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (signingGrade > 150 || executingGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
}


Form::~Form()
{
	// std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


/****************************** Operators *********************/


Form & 					Form::operator=(const Form &assign)
{
	_is_signed = assign.getIs_signed();
	return *this;
}

std::ostream&			operator<<(std::ostream &os, const Form &rhs)
{
	os << "Form " << rhs.getName();
	if (rhs.getIs_signed())
		os << " is signed, ";
	else
		os << " is not signed yet,";
	os << " and needs grade " << rhs.getSigningGrade() << " to be signed and " 
	<< rhs.getExecutingGrade() << " to be executed" << std::endl;
	return (os);
}

/******************************* Accessors *********************/


const std::string& Form::getName() const
{
	return _name;
}
bool Form::getIs_signed() const
{
	return _is_signed;
}
int Form::getSigningGrade() const
{
	return _gradeToSign;
}
int Form::getExecutingGrade() const
{
	return _gradeToExecute;
}

void Form::setIs_signed(int is_signed)
{
	this->_is_signed = is_signed;
}

/******************************* Functions *********************/

void		Form::beSigned(Bureaucrat	bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSigningGrade())
	{
		throw Form::GradeTooLowException();
		// return (0);
	}
	else
	{
		this->setIs_signed(1);
		std::cout << this->getName() << " has been signed by " << bureaucrat.getName() << std::endl;
		// return (1);
	}
}

const char*	Form::GradeTooLowException::what() const throw()
{ return ("Le grade demande pour signer ou executer est trop bas."); }

const char*	Form::GradeTooHighException::what() const throw()
{ return ("Le grade demande pour signer ou executer est trop haut."); }