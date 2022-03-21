#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
    this->target = src.target;
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->Form::getSign())
    {
        std::cout << "the form is isn't signed yet!" << '\n';
        return (false);
    }
    if (executor.Bureaucrat::getGrade() <= this->Form::getGradeToExecute())
    {
        std::cout << "BzZzZzZzZzZ..." << '\n';
        srand((unsigned int)time(NULL));
        if (rand() % 2 == 1)
            std::cout << this->target << " has been robotomized successfully" << '\n';
        else
            std::cout << "Robotomizing " << this->target << " was failure" << '\n';
        return (true);
    }
    else
        throw GradeTooLowException();
}
