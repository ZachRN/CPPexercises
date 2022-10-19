class Fixed:
{
	private:
		int					fixed;
		static const int	fraction;
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed &obj);
		~Fixed(void);

		int		getRawBits(void);
		void	setRawBits(int const raw);
};