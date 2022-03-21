#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src) 
{
    this->target = src.target;
}

bool    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->Form::getSign())
    {
        std::cout << "the form isn't signed yet!" << '\n';
        return (false);
    }
    if (executor.Bureaucrat::getGrade() <= this->Form::getGradeToExecute())
    {
        std::fstream    to_read;
        std::fstream    to_write;

        to_write.open(this->target + "_shrubbery", std::fstream::out | std::fstream::trunc);
        to_read.open("tree", std::fstream::in);
        if (!to_read.is_open())
            std::cout << "can't open file with tree!" << '\n';
        to_read.seekg(0, to_read.end);
        int     len_buf = to_read.tellg();
        char    *buffer = new char[len_buf];
        to_read.seekg(0, to_read.beg);
        to_read.read(buffer, len_buf);
        std::string buf(buffer);
        to_write.write(buf.c_str(), buf.length());
        delete [] buffer;
        return (true);
    }
    else
        throw GradeTooLowException();
}