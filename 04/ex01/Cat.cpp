//
// Created by eyza on 09/07/24.
//

#include "Cat.h"

Cat::Cat() : Animal()
{
	this->m_type = "Cat";
	this->m_brain = new Brain;
    std::cout << "Cat constructor called, with new brain." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->m_type = copy.m_type;
	this->m_brain = new Brain(*copy.m_brain);
    std::cout << "Cat copy constructor called, with new brain." << std::endl;
}

Cat::~Cat()
{	
	delete this->m_brain;
    std::cout << "Cat destructor called and its brain deleted" << std::endl;
}

Cat const &Cat::operator=(Cat const &rhs)
{
	if(this != &rhs)
	{	
		if(this->m_brain)
			delete this->m_brain;
		this->m_type = rhs.getType();
		this->m_brain = new Brain(*rhs.m_brain);
		std::cout << "Cat copy assignment called" << std::endl;
	}
    return *this;
}
std::string const &Cat::getType() const
{
    return this->m_type;
}

void Cat::setType(std::string const &type)
{
    this->m_type = type;
}

void Cat::makeSound() const
{
    std::cout << "MIAOU" << std::endl;
}

void Cat::setIdea(std::string idea, int i)
{
	this->m_brain->setIdea(idea,i);
}
void Cat::getIdeas() const
{
	for (int i = 0; i < 10; i++)
		std::cout << "Idea : " << i << "of the Cat is :" << this->m_brain->getIdea(i) << std::endl;
}