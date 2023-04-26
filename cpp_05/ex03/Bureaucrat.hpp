#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);

		void decremente();
		void incremente();

		int getGrade() const;
		std::string getName() const;
		void signForm(Form& form);
		void executeForm(const Form& form) const;

		class GradeTooLowException : public std::exception 
		{
			public:
				const char * what() const throw()
				{
					return ("Bureaucrat Exception: grade too low");
				}
		};
		class GradeTooHighException : public std::exception 
		{
			public:
				const char * what() const throw()
				{
					return ("Bureaucrat Exception: grade too high");
				}
		};

	private:
		const std::string	_name;
		int 				_grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &tp);

#endif
