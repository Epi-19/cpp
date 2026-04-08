//
// Created by eyza on 09/07/24.
//

#include "Dog.h"


Dog::Dog(): Animal()
{
	this->m_type = "Dog";
	this->m_brain = new Brain;
    std::cout << "Dog constructor called, with new brain." << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    this->m_type = copy.m_type;
    this->m_brain = new Brain(*copy.m_brain);
    std::cout << "Dog copy constructor called, with new brain." << std::endl;
}

Dog::~Dog()
{
	delete this->m_brain;
    std::cout << "Dog destructor called, and its brain deleted" << std::endl;
}

Dog const &Dog::operator=(Dog const &rhs)
{
	if(this != &rhs)
	{
		if(this->m_brain)
			delete this->m_brain;
		this->m_type = rhs.getType();
		this->m_brain = new Brain(*rhs.m_brain);
		std::cout << "Dog copy assignment called" << std::endl;
	}
    return *this;
}

std::string const &Dog::getType() const
{
    return this->m_type;
}

void Dog::setType(std::string const &type)
{
    this->m_type = type;
}

void Dog::makeSound() const
{
    std::cout << "WAF" << std::endl;
}

void Dog::setIdea(std::string idea, int i)
{
	this->m_brain->setIdea(idea,i);
}

void Dog::getIdeas() const
{
	for (int i = 0; i < 10; i++)
		std::cout << "Idea : " << i << " of the Dog is :" << this->m_brain->getIdea(i) << std::endl;
}
