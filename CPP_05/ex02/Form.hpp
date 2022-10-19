#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const AForm &copy);
		AForm(const std::string& _name, bool is_signed, int signingGrade, int executingGrade);
		virtual ~AForm();
		
		AForm& 					operator=(const AForm &assign);

		class GradeTooLowException : public std::exception
		{ public: virtual const char*	what() const throw(); };
		class GradeTooHighException : public std::exception
		{ public: virtual const char*	what() const throw(); };
		class FormNotSigned : public std::exception
		{ public: virtual const char*	what() const throw(); };
		
		virtual const std::string&	getName() const;
		virtual bool 				getIs_signed() const;
		virtual int					getSigningGrade() const;
		virtual int					getExecutingGrade() const;

		virtual void				setIs_signed(int is_signed);
		virtual void				beSigned(Bureaucrat);

		virtual	void				execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		bool 				_is_signed;
		const int			_gradeToSign;
		const int 			_gradeToExecute;
};

std::ostream&	operator<<(std::ostream &os, const AForm &rhs);

#endif