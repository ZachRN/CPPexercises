#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixed;
		static const int	bits;
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(const int def);
		Fixed(const float def);
		Fixed& operator=(const Fixed &obj);
		~Fixed(void);

		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		static int	getBits(void);

		Fixed	operator+(const Fixed &obj);
		Fixed	operator-(const Fixed &obj);
		Fixed	operator*(const Fixed &obj);
		Fixed	operator/(const Fixed &obj);

		Fixed	operator++(int);
		Fixed&	operator++(void);
		Fixed	operator--(int);
		Fixed&	operator--(void);

		static Fixed	&min(Fixed &val1, Fixed &val2);
		const static Fixed &min(Fixed const &val1, Fixed const &val2);
		static Fixed &max(Fixed &val1, Fixed &val2);
		const static Fixed &max(Fixed const &val1, Fixed const &val2);
};

std::ostream& operator<<(std::ostream &stream, const Fixed &obj);

bool operator<(const Fixed &obj, const Fixed &obj2);
bool operator<=(const Fixed &obj, const Fixed &obj2);
bool operator>(const Fixed &obj, const Fixed &obj2);
bool operator>=(const Fixed &obj, const Fixed &obj2);
bool operator==(const Fixed &obj, const Fixed &obj2);
bool operator!=(const Fixed &obj, const Fixed &obj2);

#endif
