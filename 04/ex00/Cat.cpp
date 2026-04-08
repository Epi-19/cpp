#include "Cat.h"

Cat::Cat() : Animal()
{
	this->m_type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat const &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat copy assignment called" << std::endl;
    Animal::operator=(rhs);
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