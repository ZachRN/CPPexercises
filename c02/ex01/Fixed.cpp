#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(obj.getRawBits());
}

Fixed::Fixed(const int def)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(def << this->bits);
	return ;
}

Fixed::Fixed(const float def)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(def * (1 << this->bits)));
	return ;
}
Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream &stream, const Fixed &obj)
{
	stream << obj.toFloat();
	return stream;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> 8);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << this->bits));
}