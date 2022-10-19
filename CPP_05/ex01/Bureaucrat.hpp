#ifndef	BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
// #include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string	name, int grade);
		Bureaucrat( Bureaucrat&	copy);
		~Bureaucrat();

		Bureaucrat&				operator=( const Bureaucrat& rhs);
		friend std::ostream&	operator<<(std::ostream &os, const Bureaucrat &rhs);

		class GradeTooLowException : public std::exception
		{
			public: 
				virtual const char*	what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public: 
				virtual const char*	what() const throw();
		};

		const std::string&		getName(void) const;
		int						getGrade(void) const;
		void					incGrade(void);
		void					decGrade(void);

		void					signForm(Form);

	private:
		const std::string		_name;
		int						_grade;
};		

#endif
