#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"


class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		
		const std::string&	getTarget(void) const;			

		void				beSigned(Bureaucrat);
		void				execute(Bureaucrat const & executor) const;
		void				action(std::string target) const;
	
	private:
		std::string		_target;
};

#endif