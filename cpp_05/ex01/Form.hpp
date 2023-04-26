#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	public:
		Form();
		~Form();
		Form(std::string name, const int sign, const int execute);
		Form(const Form &copy);
		Form &operator=(const Form &copy);

		std::string getName() const;
		bool getSigned() const;
		int getSign() const;
		int getExecute() const;

		void beSigned(const Bureaucrat& bureaucrat);

		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char * what() const throw()
				{
					return "Grade Too low!";
				}
		};

		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char * what() const throw()
				{
					return "Grade Too High!";
				}
		};

	private:
		std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &tp);

#endif
