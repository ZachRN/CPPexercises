#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
#include <deque>

template <class t>
class MutantStack : public std::stack<t>
{
	MutantStack(void) : std::stack<t>(){}
	MutantStack(MutantStack const & src) : std::stack<T>(src){};
	MutantStack& operator=(MutantStack const & src)
	{
		std::stack<T>::operator=(src);
		return (*this);
	}
	~MutantStack(void){};

}

#endif
