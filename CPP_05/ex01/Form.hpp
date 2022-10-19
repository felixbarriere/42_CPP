#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"


class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(const std::string& _name, bool is_signed, int signingGrade, int executingGrade);
		~Form();
		
		Form& 					operator=(const Form &assign);

		class GradeTooLowException : public std::exception
		{ public: virtual const char*	what() const throw(); };
		class GradeTooHighException : public std::exception
		{ public: virtual const char*	what() const throw(); };
		
		const std::string&	getName() const;
		bool 				getIs_signed() const;
		int					getSigningGrade() const;
		int					getExecutingGrade() const;

		void				setIs_signed(int is_signed);
		void				beSigned(Bureaucrat);

	private:
		const std::string	_name;
		bool 				_is_signed;
		const int			_gradeToSign;
		const int 			_gradeToExecute;
};

std::ostream	&operator<<(std::ostream &os, const Form &rhs);

#endif