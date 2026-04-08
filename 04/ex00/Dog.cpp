#include "Dog.h"

Dog::Dog():  Animal()
{
	this->m_type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog const &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog copy assignment called" << std::endl;
    Animal::operator=(rhs);
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