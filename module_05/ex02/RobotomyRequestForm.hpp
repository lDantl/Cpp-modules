#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"



class RobotomyRequestForm : public Form
{
    private:
        std::string target;


    
    public:
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &src);



        virtual bool    execute(Bureaucrat const &executor) const;



        const RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};


#endif