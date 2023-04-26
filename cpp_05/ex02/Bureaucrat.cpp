#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat") 
{
	 std::cout << "DF bureaucrat constructor call " << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	 std::cout << "Bureaucrat constructor call " << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	 std::cout << "Bureaucrat destructor call " << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
	 std::cout << "Copy constructor call " << std::endl;
}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	 std::cout << "Bureaucrat copy assignement operator call " << std::endl;
	this->_grade = copy._grade;
	return (*this);
}

void Bureaucrat::decremente()
{
	if (this->_grade + 1 > 150) 
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::incremente()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::signForm(Form& form)
{
	try 
	{
		form.beSigned(*this);
		std::cout << *this <<" signed " << form.getName() << std::endl;
	} 
	catch (Form::GradeTooLowException &e) 
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " bcs" << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &tp)
{
	out << tp.getName() << ", bureaucrat grade " << tp.getGrade();
	return (out);	
}

void Bureaucrat::executeForm(const Form& form) const 
{
    try 
	{
        form.execute(*this);
    } 
	catch (std::exception& e)
	{
        std::cout << _name << " couldn't execute " << form.getName() << " bcs " << e.what() << std::endl;
    }
}
