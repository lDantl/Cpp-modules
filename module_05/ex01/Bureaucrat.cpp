#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name) : name(name) {};

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
}

const Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
        this->Bureaucrat::setGrade(rhs.Bureaucrat::getGrade());
        (std::string)this->name = (std::string)rhs.Bureaucrat::getName();
    }
    return (*this);
}

int Bureaucrat::getGrade() const
{
    return(this->grade);
}

const std::string   Bureaucrat::getName() const
{
    return(this->name);
}

void    Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
    this->grade = grade;  
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &source)
{
    output << source.Bureaucrat::getName() << ", bureaucrat grade " << source.Bureaucrat::getGrade();
    return (output);
}

void Bureaucrat::increment()
{
    if (this->Bureaucrat::getGrade() < 2)
        throw GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->Bureaucrat::getGrade() > 149)
        throw GradeTooLowException();
    else
        this->grade++;
}

void    Bureaucrat::signForm(Form &to_sign) const
{
    if (to_sign.Form::beSigned(*this))
    {
        std::cout << this->Bureaucrat::getName() << " signs ";
        std::cout << to_sign.Form::getName() << '\n';
    }
    else
        std::cout << this->Bureaucrat::getName() << " cannot sign " << to_sign.Form::getName() << " because his grade to low" << '\n';
}