#include "Intern.hpp"

Intern::Intern() 
{
	std::cout << "Intern constructor call" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor call" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern Copy constructor call" << std::endl;
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	std::cout << "Intern copy assignement operator call" << std::endl;
	(void)copy;
	return (*this);
}

Form *     Intern::_Shrubbery(const std::string & target) {
    return (new ShrubberyCreationForm(target));
}

Form *     Intern::_Robotomy(const std::string & target) {
    return (new RobotomyRequestForm(target));
}

Form *     Intern::_Presidential(const std::string & target) {
    return (new PresidentialPardonForm(target));
}

Form *     Intern::makeForm(std::string  name,std::string  target) 
{
    std::string form[3] = {"shrubbery creation","robotomy request", "presidential pardon"};
	Form *     (Intern::*f[4])(const std::string & tar) = {&Intern::_Shrubbery,&Intern::_Robotomy, &Intern::_Presidential};

    for (int i = 0; i < 3; i++) 
	{
        if (form[i] == name) 
		{
            std::cout << "Intern creates " << name << std::endl;
            return (this->*f[i])(target);
        }
    }
    std::cout << "Intern couldn't find form " << name << std::endl;
    return (NULL);
}
