#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		void setIdea(std::string idea, int n);
		std::string getIdea(int n) const;

		void			displayIdeas(void) const;
		
		Brain();
		Brain(const Brain &src);
		Brain& operator=(const Brain &src);
		~Brain();
};

#endif