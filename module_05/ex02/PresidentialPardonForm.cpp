#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
    this->target = src.target;
}

bool    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->Form::getSign())
    {
        std::cout << "the form isn't signed yet!" << '\n';
        return (false);
    }
    if (executor.Bureaucrat::getGrade() <= this->Form::getGradeToExecute())
    {
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << '\n';
        return (true);
    }
    else
        throw GradeTooLowException();
}