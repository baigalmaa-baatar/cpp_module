#include "Brain.hpp"

Brain::Brain()
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = "I want to sleep.\n";
}
Brain::Brain(const std::string ideas[100])
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = ideas[i];
}
Brain::Brain(Brain const &obj)
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = obj._ideas[i];
}
Brain &Brain::operator=(const Brain &other)
{
    for (size_t i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    return *this;
}

Brain::~Brain(){
    // for (size_t i = 0; i < 100; i++)
    //     if (this->_ideas[i].length() > 0)
    //         this->_ideas[i] = ""; //oops not necessary?
};

const std::string &Brain::getIdeas(size_t index_of_ideas) const
{
    static const std::string res = "Error\n";
    if (index_of_ideas >= 0 && index_of_ideas < 100)
        return (_ideas[index_of_ideas]);
    return res;
}

void Brain::setIdeas(size_t index_of_ideas, const std::string &one_idea)
{
    if (index_of_ideas >= 0 && index_of_ideas < 100 && one_idea.length() > 0)
        _ideas[index_of_ideas] = one_idea;
}
