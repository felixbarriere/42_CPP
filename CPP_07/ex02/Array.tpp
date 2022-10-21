#ifndef ARRAY_TPP
#define ARRAY_TPP
// #include "Array.hpp"


template <typename T>
class Array
{
	public:
		Array(void) : _tab(NULL), _size(0) {} ;
		Array(size_t n) : _tab(new T[n]), _size(n) {};
		Array(const Array& copy) { *this = copy; };
		~Array<T>(void) { delete [] _tab; };

		Array&	operator=( const Array& rhs)
		{
			if (this == &rhs)
				return (*this);
			this->_tab = new T[rhs->size];
			this->_size = rhs._size;
			for (int i = 0; i < rhs.size; i++)
			{
				this->_tab[i] = rhs.tab[i];
			}
			return (*this);
		}
		
		T&		operator[]( int index)
		{
			if (index > this->size)
				throw Array::AccessElements();
			else
				return (_tab[index]);
		};

		class AccessElement : public std::exception
		{ public: virtual const char*	what() const throw()
			{ return ("The element requested is out of scope "); } };

		T		getTab(void) const { return (this->tab); };
		size_t	getSize(void) const { return (this->size); }

	private:
		T		*_tab;
		size_t	_size;


};

/* ******************************************************************* */

/******************* Constructeurs *******************/

// template <typename T>
// Array<T>::Array(void) : _tab(NULL), _size(0) 
// {}

// template <typename T>
// Array<T>::Array(size_t n) : _tab(new T[n]), _size(n)
// {}

// template <typename T>
// Array<T>::Array(const Array& copy)
// { *this = copy; }

// template <typename T>
// Array<T>::~Array<T>(void) 
// { delete [] _tab; }

/******************* Operateurs *******************/

// template <typename T>
// T&		Array<T>::operator[]( int index )
// {
// 	if (index > this->size)
// 		throw Array::AccessElements();
// 	else
// 		return (_tab[index]);
// }

/******************* Fonctions membres *******************/

// template <typename T>
// T		Array<T>::getTab(void) const
// {
// 	return (this->tab);
// }

// template <typename T>
// size_t	Array<T>::getSize(void) const
// {
// 	return (this->size);
// }

/******************* Exceptions *******************/

#endif