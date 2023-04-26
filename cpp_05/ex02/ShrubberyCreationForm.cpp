#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137),  _target(target)
{
	std::cout << "ShrubberyCreationForm constructor call" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor call" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target) 
{
	std::cout << "ShrubberyCreationForm copy constructor call" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
		*this = copy;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const 
{
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    else if (executor.getGrade() > this->getExecute())
	{
		throw Form::GradeTooLowException();
	}
    std::ofstream file(this->getName() + "_shrubbery");
	file << "            $         "<< std::endl;
    file << "           $$o        "<< std::endl;
    file << "          $$$$$       "<< std::endl;
    file << "         $$$$$$$      "<< std::endl;
    file << "        o$$$**$*$     "<< std::endl;
    file << "       o$$$$*$$$$$    "<< std::endl;
    file << "      *$$$o$$$$$$$o   "<< std::endl;
    file << "     $$$$$$o$$$$$$$$  "<< std::endl;
    file << "            |         "<< std::endl;
    file << "            |         "<< std::endl;
    file << "            |         "<< std::endl;
    file << "            |         "<< std::endl;
	file.close();
}
