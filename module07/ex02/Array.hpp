#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array( void );
		Array( unsigned int );
		Array( const Array & );
		Array& operator = ( const Array & );
		T&	operator [] ( unsigned int );
		~Array( void );

		T*				getArray( void ) const;
		void			setArray( T* );

		unsigned int	size( void ) const;

	private:
		T* const			_arr;
		const unsigned int	_size;
};

template <typename T>
Array<T>::Array( void ) : _arr(new T[0]), _size(0)
{
	std::cout << "Array default constructor called." << std::endl;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _arr(new T[n]), _size(n)
{
	std::cout << "Array parameter constructor called." << std::endl;
	for (unsigned int i = 0; i < n; i++)
		_arr[i] = T();
}

template <typename T>
Array<T>::Array( const Array & src ) : _arr(new T[src.size()]), _size(src.size())
{
	std::cout << "Array copy constructor called." << std::endl;
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = src.getArray()[i];
	*this = src;
}

template <typename T>
Array<T>&	Array<T>::operator = ( const Array<T> & rhs )
{
	std::cout << "Array copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

template <typename T>
Array<T>::~Array( void )
{
	std::cout << "Array destructor called." << std::endl;
	delete[] _arr;
}

template <typename T>
T*		Array<T>::getArray( void ) const
{
	return _arr;
}

template <typename T>
void	Array<T>::setArray( T*  new_arr )
{
	_arr = new_arr;
}

template <typename T>
unsigned int	Array<T>::size( void ) const
{
	return _size;
}

template <typename T>
T&	Array<T>::operator [] (unsigned int i)
{
	if (i >= _size)
		throw std::out_of_range("Index out of bounds!");
	return _arr[i];
}

#endif