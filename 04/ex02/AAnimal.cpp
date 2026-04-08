//
// Created by eyza on 09/07/24.
//

#include "AAnimal.h"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor called" << std::endl;
	this->m_type = "undefined AAnimal";
}

AAnimal::AAnimal(AAnimal const &copy)
{
    *this = copy;
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal const &AAnimal::operator=(AAnimal const &rhs)
{
    std::cout << "AAnimal copy assignment called" << std::endl;
    if (this != &rhs)
        this->m_type = rhs.getType();
    return *this;
}

std::string const &AAnimal::getType() const
{
    return m_type;
}

void AAnimal::makeSound() const
{
    std::cout << "An AAnimal " << this->m_type << " made a sound!" << std::endl;
}