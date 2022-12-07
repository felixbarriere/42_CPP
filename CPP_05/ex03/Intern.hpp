#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include <exception>
#include "Form.hpp"


class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		Intern(std::string target);
		~Intern();
		
		Intern & operator=(const Intern &assign);
		
		class FormNameIncorrect : public std::exception
		{ public: virtual const char*	what() const throw(); };

		AForm*	makeForm(std::string formName,std::string formTarget) const;
};

#endif