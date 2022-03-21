#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"



class ShrubberyCreationForm : public Form
{
    private:
        std::string target;

    
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &src);


        virtual bool    execute(Bureaucrat const &executor) const;



        const ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};



#endif