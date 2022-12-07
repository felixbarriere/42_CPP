#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"


class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		
		const std::string&	getTarget(void) const;			

		void				execute(Bureaucrat const & executor) const;
		void				action(std::string target) const;

	private:
		std::string		_target;
		ShrubberyCreationForm();
};

#endif