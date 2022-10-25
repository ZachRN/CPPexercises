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
};

std::ostream& operator<<(std::ostream &stream, const Fixed &obj);

#endif
