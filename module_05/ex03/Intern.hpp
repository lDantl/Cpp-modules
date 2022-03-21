#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"


class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern const &src);


        
        Form *makeForm(std::string name_of_form, std::string target_of_form);



        const Intern &operator=(Intern const &rhs);
};

#endif