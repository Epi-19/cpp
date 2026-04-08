//
// Created by eyza on 09/07/24.
//

#include "Animal.h"


Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
	this->m_type = "undefined";
}

Animal::Animal(Animal const &copy)
{
    *this = copy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal const &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal copy assignment called" << std::endl;
    if (this != &rhs)
        this->m_type = rhs.getType();
    return *this;
}


std::string const &Animal::getType() const
{
    return m_type;
}

void Animal::makeSound() const
{
    std::cout << "An animal " << this->m_type << " made a sound!" << std::endl;
}