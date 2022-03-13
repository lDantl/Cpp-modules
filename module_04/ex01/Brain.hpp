#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

const std::string posibleIdeas[] = {"Eat", "drink", "sleep", "tear", "bite", "hug", "take a pose", "steal food"};

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        ~Brain();
        Brain(Brain const &src);
        Brain &operator=(Brain const &rhs);

        std::string getIdea(int i);
};

#endif