#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45),  _target(target)
{
	std::cout << "RobotomyRequestForm constructor call" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target) 
{
	std::cout << "RobotomyRequestForm copy constructor call" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
		*this = copy;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const 
{	
	if (this->getSigned() == false)
        throw Form::NotSignedException();
    if ( executor.getGrade() > this->getExecute() )
        throw Form::GradeTooLowException();
    else 
	{
		static int i = 0;
		if (i % 2 == 0)
			std::cout << "BRRRRRR " << _target << "has been robotomized" << std::endl;
		else
        	std::cout << "Failed !" << std::endl;
		i++;
    }
}
