#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_nbr;
		std::string		secret;
	public:
		Contact();
		~Contact();
		void		set_first_name(std::string input);
		std::string	get_first_name(void);
		void		set_last_name(std::string	input);
		std::string	get_last_name(void);
		void		set_nickname(std::string	input);
		std::string	get_nickname(void);
		void		set_phone_nbr(std::string	input);
		std::string	get_phone_nbr(void);
		void		set_secret(std::string	input);
		std::string	get_secret(void);
};

#endif
