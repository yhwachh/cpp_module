#ifndef PRESIDENTIALPARDONFORM_HPP 
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		void execute(const Bureaucrat &tp) const;

	private:
		std::string _target;
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

};

#endif