#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void );
		MutantStack( const MutantStack & src );
		MutantStack& operator = ( const MutantStack & rhs);
		~MutantStack( void );

		typedef typename MutantStack<T>::container_type::iterator iterator;

		iterator	begin( void );
		iterator	end( void );
	private:
		// private attributes here
};

template <typename T>
MutantStack<T>::MutantStack( void )
{
	std::cout << "MutantStack default constructor called." << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack & src )
{
	std::cout << "MutantStack copy constructor called." << std::endl;
	*this = src;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator = ( const MutantStack & rhs )
{
	std::cout << "MutantStack copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack( void )
{
	std::cout << "MutantStack destructor called." << std::endl;
}

template <typename T>
typename MutantStack<T>::container_type::iterator	MutantStack<T>::begin( void )
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::container_type::iterator	MutantStack<T>::end( void )
{
	return this->c.end();
}

#endif