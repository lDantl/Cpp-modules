#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
       PresidentialPardonForm(PresidentialPardonForm const &src);



        virtual bool    execute(Bureaucrat const &executor) const;



        const  PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
};

#endif