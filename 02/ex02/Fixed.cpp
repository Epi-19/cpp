/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 02:56:45 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/10 04:24:23 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    raw_bits = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    this->raw_bits = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    this->raw_bits = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    return (this->raw_bits);
}

void Fixed::setRawBits(int const raw)
{
    this->raw_bits = raw;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
    this->raw_bits = num << fractionalBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
	this->raw_bits = roundf(num * (1 << fractionalBits));
}

float Fixed::toFloat( void ) const
{
    return((float)raw_bits / (1 << fractionalBits));
}

int Fixed::toInt( void ) const
{
    return(raw_bits >> fractionalBits);
}



bool Fixed::operator>(const Fixed &other) const
{
	if (this->toFloat() > other.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator<(const Fixed &other) const
{
	if (this->toFloat() < other.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator==(const Fixed &other) const
{
	if (this->toFloat() == other.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator!=(const Fixed &other) const
{
	if (this->toFloat() != other.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator>=(const Fixed &other) const
{
	if (this->toFloat() >= other.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator<=(const Fixed &other) const
{
	if (this->toFloat() <= other.toFloat())
		return (true);
	return (false);
}


Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}
Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}
Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}
Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}


Fixed Fixed::operator++(int)
{
	Fixed Temp = *this;
	this->raw_bits++;
	return (Temp);
}
Fixed Fixed::operator++()
{
	this->raw_bits++;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed Temp = *this;
	this->raw_bits--;
	return (Temp);
}
Fixed Fixed::operator--()
{
	this->raw_bits--;
	return (*this);
}




Fixed& Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	return (num2);
}
const Fixed& Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	return (num2);
}
Fixed& Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	return (num2);
}
const Fixed& Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	return (num2);
}


std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}