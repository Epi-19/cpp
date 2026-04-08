//
// Created by eyza on 09/07/24.
//

#include "Brain.h"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain const &Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain copy assignment called" << std::endl;
	if(this != &rhs)
	{
		for (int i = 0 ; i < 100 ; i++)
			this->m_ideas[i]  = rhs.m_ideas[i];
	}
    return *this;
}

std::string const Brain::getIdea(int i) const
{
	if(i < 0 || i > 99)
		return("");
    return this->m_ideas[i];
}

void Brain::setIdea(std::string idea, int i)
{
	if (i < 100 && i >= 0)
		this->m_ideas[i] = idea;
	else
		std::cout << "There is only 100 ideas" << std::endl;
}
