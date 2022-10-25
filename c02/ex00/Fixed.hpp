#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					fixed;
		static const int	bits;
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed &obj);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
