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

/*• The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1.*/

/*A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one.*/