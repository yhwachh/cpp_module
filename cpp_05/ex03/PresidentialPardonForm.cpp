#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5),  _target(target)
{
	std::cout << "PresidentialPardonForm constructor call" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor call" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target) 
{
	std::cout << "PresidentialPardonForm copy constructor call" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
		*this = copy;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& tp) const 
{
	if (this->getSigned() == false)
        throw Form::NotSignedException();
    if ( tp.getGrade() > this->getExecute() )
        throw Form::GradeTooLowException();
    else 
        std::cout << _target << " Pardoned by Zaphod Beeblebrox " << std::endl;
}
