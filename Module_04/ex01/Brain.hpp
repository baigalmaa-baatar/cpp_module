#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
    protected:
        std::string      _ideas[100];
    public:
        Brain();//default constructor
        Brain(const std::string ideas[100]); //constructor with parameters
        Brain(Brain const &obj); //copy constructor
        Brain &operator=(const Brain&other); //copy assignment operator

        virtual ~Brain();

        const std::string     &getIdeas(size_t index_of_ideas) const;
        void            setIdeas(size_t index_of_ideas, const std::string &one_idea);
};

# endif