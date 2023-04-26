#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		void execute(const Bureaucrat &executor) const;

	private:
		const std::string _target;
		RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

};

#endif
