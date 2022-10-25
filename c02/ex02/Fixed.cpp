#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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


// im aware of return (obj.toFloat() < obj2.toFloat())
//i just liked this
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
	if (obj.toFloat() != obj2.toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &obj)
{
	Fixed to_return(this->toFloat() + obj.toFloat());
	return (to_return);
}

Fixed	Fixed::operator-(const Fixed &obj)
{
	Fixed to_return(this->toFloat() - obj.toFloat());
	return (to_return);
}

Fixed	Fixed::operator*(const Fixed &obj)
{
	Fixed to_return(this->toFloat() * obj.toFloat());
	return (to_return);
}

Fixed	Fixed::operator/(const Fixed &obj)
{
	Fixed to_return(this->toFloat() / obj.toFloat());
	return (to_return);
}

Fixed& Fixed::operator++(void)
{
	this->fixed++;
	// this->setRawBits(roundf(((this->toFloat() + 1) * (1 << this->bits))));
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed to_return(this->toFloat());
	this->operator++();
	// this->setRawBits(roundf(((this->toFloat() + 1) * (1 << this->bits))));
	return (to_return);
}

Fixed& Fixed::operator--(void)
{
	this->fixed--;
	// this->setRawBits(roundf(((this->toFloat() - 1) * (1 << this->bits))));
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed to_return(this->toFloat());
	this->operator--();
	// this->setRawBits(roundf(((this->toFloat() - 1) * (1 << this->bits))));
	return (to_return);
}

Fixed &Fixed::min(Fixed &val1, Fixed &val2)
{
	if (val1.toFloat() < val2.toFloat())
		return (val1);
	return (val2);
}

const Fixed &Fixed::min(const Fixed &val1, const Fixed &val2)
{
	if (val1.toFloat() < val2.toFloat())
		return (val1);
	return (val2);
}

Fixed &Fixed::max(Fixed &val1, Fixed &val2)
{
	if (val1.toFloat() > val2.toFloat())
		return (val1);
	return (val2);
}

const Fixed &Fixed::max(const Fixed &val1, const Fixed &val2)
{
	if (val1.toFloat() > val2.toFloat())
		return (val1);
	return (val2);
}