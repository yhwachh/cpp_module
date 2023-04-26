#include "Form.hpp"

Form::Form() : _name("Default form"), _signed(false), _gradeSign(150), _gradeExecute(150) 
{
	 std::cout << "Default constructor call " << std::endl;
}

Form::Form(std::string name, int sign, int execute) : _name(name), _gradeSign(sign), _gradeExecute(execute)
{
	 std::cout << "Form constructor call " << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor call " << std::endl;
}

std::string Form::getName() const 
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSign() const
{
	return (this->_gradeSign);
}

int Form::getExecute() const
{
	return (this->_gradeExecute);
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{
	std::cout << "Copy constructor call " << std::endl;
}

Form &Form::operator=(const Form &copy)
{
	(void) copy;
	std::cout << "Form copy assignement operator call " << std::endl;
	return (*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &tp)
{
	out << "============== Form ============== " << std::endl  << "Form name: " << tp.getName() << " Grade sign: " << tp.getSign() << " Grade execute: " << tp.getExecute() << std::endl;
	return (out);
}
