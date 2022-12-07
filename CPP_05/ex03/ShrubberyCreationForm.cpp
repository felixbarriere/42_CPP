#include <fstream>
#include <sys/stat.h>
#include "ShrubberyCreationForm.hpp"


/****************************** constructors *********************/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 0, 145, 137)
{
	// std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	// std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 0, 145, 137), _target(target)
{
	// std::cout << "\e[0;33mFields Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


/****************************** Operators *********************/


ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	this->setIs_signed(assign.getIs_signed());
	return (*this);
}


/****************************** Accessors *********************/


const std::string& ShrubberyCreationForm::getTarget() const
{
	return _target;
}

/****************************** Functions *********************/


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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

void	ShrubberyCreationForm::action(std::string target) const
{
	target.insert(target.size(), "_shrubbery");
	const char*	cstr = target.c_str();

	std::ofstream		ofs(cstr , std::ofstream::out);
	
	ofs << "        _-_         \n";
	ofs << "     /~~   ~~\\     \n";
    ofs << "  /~~         ~~\\  \n";
    ofs << " {               }  \n";
    ofs << "  \\  _-     -_  /  \n";
    ofs << "      ~\\\\ //  ~   \n";
    ofs << " _- -   | | _- _    \n";
    ofs << "   _ -  | |   -_    \n";
    ofs << "       // \\\\        \n";

	ofs.close();

	std::cout << this->getName() << " file has been created" << std::endl;

}
