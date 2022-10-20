#include "Bureaucrat.hpp"

/****************************** constructors *********************/


Bureaucrat::Bureaucrat(void)
{
	// std::cout << "default constructor Bureaucrat called " << std::endl;
}

Bureaucrat::Bureaucrat(std::string	name, int grade) : _name(name)
{
	// std::cout << "type constructor Bureaucrat called " << std::endl;
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade = grade;


}

Bureaucrat::Bureaucrat( Bureaucrat&	copy)
{
	std::cout << "copy constructor Bureaucrat called " << std::endl;
	
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "default destructor Bureaucrat called " << std::endl;
}

/****************************** Operators *********************/


Bureaucrat&				Bureaucrat::operator=( const Bureaucrat& rhs)
{
	std::string* strPtr = const_cast<std::string*>(&this->_name);	
	*strPtr = rhs._name;
	this->_grade = rhs._grade;

	return (*this);
}

std::ostream&			operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (os);
}


/******************************* Accessors *********************/


const std::string&		Bureaucrat::getName(void) const
{ return (this->_name); }


int						Bureaucrat::getGrade(void) const
{ return (this->_grade); }

/****************************** Member functions *********************/
void					Bureaucrat::incGrade(void)
{
	std::cout << "Demande d'augmentation du grade de " << this->getName() <<std::endl;
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		std::cout << "le grade de " << this->getName() << " passe de " << this->_grade << " a " << this->_grade - 1 <<std::endl;
		this->_grade--;
	}
}

void					Bureaucrat::decGrade(void)
{
	std::cout << "Demande de baisse du grade de " << this->getName() <<std::endl;
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();

	else
	{
		std::cout << "le grade de " << this->getName() << " passe de " << this->_grade << " a " << this->_grade + 1 <<std::endl;
		this->_grade++;
	}
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{ 
	return ("le grade est trop bas...");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{ return ("le grade est trop haut..."); }