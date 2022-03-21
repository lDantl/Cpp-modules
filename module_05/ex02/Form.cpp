#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : name(name), is_signed(0), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    if (this->Form::getGradeToSign() < 1)
        throw GradeTooHighException();
    else if (this->Form::getGradeToSign() > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &src) : name(src.getName()), grade_to_sign(src.getGradeToSign()), grade_to_execute(src.getGradeToExecute())
{
    this->is_signed = src.Form::getSign();
}

Form::~Form(){}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade too high for the form!");
};
	
const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade too low for the form!");
}

const Form  &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        this->is_signed = rhs.Form::getSign();
        (std::string)this->name = (std::string)rhs.Form::getName();
    }
    return (*this);
}

const std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSign() const
{
    return (this->is_signed);
}

int Form::getGradeToSign() const
{
    return (this->grade_to_sign);
}

int Form::getGradeToExecute() const
{
    return (this->grade_to_execute);
}

bool Form::beSigned(Bureaucrat const &clerk)
{
    if (clerk.Bureaucrat::getGrade() <= this->Form::getGradeToSign())
    {
        this->is_signed = true;
        return (true);
    }
    else
        throw GradeTooLowException();
    return (false);
}

std::ostream &operator<<(std::ostream &out, Form const &source)
{
	std::string status;

	status = source.Form::getSign() ? " is signed" : " isn't signed";
	out << "The form " << source.Form::getName() << " with grade to sign = " << source.Form::getGradeToSign() << " and grade to execute = " << source.Form::getGradeToExecute() << status;
	return (out);
}

