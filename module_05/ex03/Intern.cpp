#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "I don't have a name, a rank, or any defining characteristics at all. I'm just dust under my master's fingernails" << '\n';
}

Intern::~Intern() 
{
    std::cout << "If my master no longer needs me, I am ready to end my miserable existence!" << '\n';
}

Intern::Intern(Intern const &src)
{
    *this =  src;
}

Form *Intern::makeForm(std::string name_of_form, std::string target_of_form)
{
    int i = 0;
    std::string forms[3];
    forms[0] = "shrubbery creation";
    forms[1] = "robotomy request";
    forms[2] = "presidential pardon";

    while ((i < 3) && (forms[i] != name_of_form))
        i++;
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << forms[i] << '\n';
            return (new ShrubberyCreationForm(target_of_form));
        case 1:
            std::cout << "Intern creates " << forms[i] << '\n';
            return (new RobotomyRequestForm(target_of_form));
        case 2:
            std::cout << "Intern creates " << forms[i] << '\n';
            return (new PresidentialPardonForm(target_of_form));
        default:
            std::cout << "I don't know this type of form!" << '\n';
            break;
    }
    return (NULL);
}

const Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}
