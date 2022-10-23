#include "Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::bits = 8;

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->fixed = 0;
}

Fixed::Fixed(const Fixed &obj)
: fixed(obj.getRawBits())
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int def)
{
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(def << this->bits);
	return ;
}

Fixed::Fixed(const float def)
{
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(def * (1 << this->bits)));
	return ;
}
Fixed& Fixed::operator=(const Fixed &obj)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
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
	return (this->getRawBits() >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << this->bits));
}

int		Fixed::getBits(void)
{
	return (Fixed::bits);
}

std::ostream& operator<<(std::ostream &stream, const Fixed &obj)
{
	stream << obj.toFloat();
	return stream;
}

bool	operator<(const Fixed &obj, const Fixed &obj2)
{
	if (obj.toFloat() < obj2.toFloat())
		return (true);
	return (false);
}

bool	operator<=(const Fixed &obj, const Fixed &obj2)
{
	if (obj.toFloat() <= obj2.toFloat())
		return (true);
	return (false);
}

bool	operator>(const Fixed &obj, const Fixed &obj2)
{
	if (obj.toFloat() > obj2.toFloat())
		return (true);
	return (false);
}

bool	operator>=(const Fixed &obj, const Fixed &obj2)
{
	if (obj.toFloat() >= obj2.toFloat())
		return (true);
	return (false);
}

bool	operator==(const Fixed &obj, const Fixed &obj2)
{
	if (obj.toFloat() == obj2.toFloat())
		return (true);
	return (false);
}

bool	operator!=(const Fixed &obj, const Fixed &obj2)
{
	if (obj.toFloat() == obj2.toFloat())
		return (true);
	return (false);
}

Fixed	operator+(const Fixed &obj, const Fixed &obj2)
{
	Fixed to_return(obj.toFloat() + obj2.toFloat());
	return (to_return);
}

Fixed	operator-(const Fixed &obj, const Fixed &obj2)
{
	Fixed to_return(obj.toFloat() - obj2.toFloat());
	return (to_return);
}

Fixed	operator*(const Fixed &obj, const Fixed &obj2)
{
	Fixed to_return(obj.toFloat() * obj2.toFloat());
	return (to_return);
}

Fixed	operator/(const Fixed &obj, const Fixed &obj2)
{
	Fixed to_return(obj.toFloat() / obj2.toFloat());
	return (to_return);
}

Fixed operator++(Fixed &obj)
{
	Fixed to_return(obj.toFloat());
	obj.setRawBits((obj.getRawBits() + (1 >> Fixed::getBits())));
	return (to_return);
}

Fixed& operator++(Fixed &obj, int add)
{
	obj.setRawBits((obj.getRawBits() + (add >> Fixed::getBits())));
	return (obj);
}

Fixed operator--(Fixed &obj)
{
	Fixed to_return(obj.toFloat());
	obj.setRawBits((obj.getRawBits() - (1 >> Fixed::getBits())));
	return (to_return);
}

Fixed& operator--(Fixed &obj, int sub)
{
	obj.setRawBits((obj.getRawBits() - (sub >> Fixed::getBits())));
	return (obj);
}