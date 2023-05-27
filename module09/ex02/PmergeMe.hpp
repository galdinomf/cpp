#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <deque>

class PmergeMe
{
	private:
		PmergeMe( void );
		PmergeMe( const PmergeMe & );
		PmergeMe& operator = ( const PmergeMe & );
		~PmergeMe( void );

		static std::deque<int> _deque;
	public:
		static bool	validateInput( char** );
		static void mergeInsertSort( std::deque<int>& );
};

#endif