#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default Constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Name Constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called for " << _name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (_hitPoints > 0)
        std::cout << "FragTrap " << _name << " raises its hand for a high five! :D" << std::endl;
    else
        std::cout << "FragTrap " << _name << " is dead and cannot high five." << std::endl;
}
