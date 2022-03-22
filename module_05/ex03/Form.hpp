#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                is_signed;
        const int           grade_to_sign;
        const int           grade_to_execute;



    public:
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        Form(Form const &src);
        virtual ~Form() = 0;



        const Form &operator=(Form const &rhs);



        const std::string   getName() const;
        bool    getSign() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        

        virtual bool execute(Bureaucrat const &executor) const = 0;


        bool    beSigned(Bureaucrat const &clerk);



          class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };




        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
};


std::ostream &operator<<(std::ostream &output, Form const &source);



#endif