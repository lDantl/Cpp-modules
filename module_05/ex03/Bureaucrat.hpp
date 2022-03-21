#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string     name;
        int             grade;
        Bureaucrat();



    public:
        Bureaucrat(std::string name);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &src);



        int     getGrade() const;
        void    setGrade(int grade);
        const   std::string getName() const;
        void    increment();
        void    decrement();



        const   Bureaucrat &operator=(Bureaucrat const &rhs);



        void    signForm(Form &to_form) const;



        void    executeForm(Form const &form);



        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };




        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
};


std::ostream &operator<<(std::ostream &output, Bureaucrat const &source);


#endif