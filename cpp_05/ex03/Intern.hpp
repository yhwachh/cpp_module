#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &copy);	
	
		Form *makeForm(std::string name, std::string target);

	private:
        Form * _Shrubbery(const std::string & target);
        Form * _Robotomy(const std::string & target);
        Form * _Presidential(const std::string & target);
};

#endif
