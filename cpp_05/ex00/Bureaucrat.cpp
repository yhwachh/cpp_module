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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &tp)
{
	out << tp.getName() << ", bureaucrat grade " << tp.getGrade();
	return (out);	
}
