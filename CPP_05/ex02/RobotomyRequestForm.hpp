#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"


class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		
		const std::string&	getTarget(void) const;			

		void				beSigned(Bureaucrat);
		void				execute(Bureaucrat const & executor) const;
		void				action(std::string target) const;		
	
	private:
		std::string			_target;
};

#endif