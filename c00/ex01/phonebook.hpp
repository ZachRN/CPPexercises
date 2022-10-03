#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact phonebook[8];
		int		contact_nbr;
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(void);
		void	search_contact(void);
		int		get_contact_number(void);
		void	set_next_contact(void);
};

#endif
