#ifndef ARRAY_TPP
#define ARRAY_TPP
// #include "Array.hpp"


template <typename T>
class Array
{
	public:
		Array(void);
		Array(size_t n);
		Array(const Array& copy);
		~Array<T>(void);

		class AccessElement : public std::exception
		{ 
			public: virtual const char*	what() const throw();
		};

		Array&	operator=( const Array& rhs);
		T&		operator[]( int index);

		T		getTab(void) const;
		T		getSize(void) const;

	private:
		T*		_tab;
		T		_size;
};

/* ******************************************************************* */

/******************* Constructeurs *******************/

template <typename T>
Array<T>::Array(void) : _tab(NULL), _size(0) 
{}

template <typename T>
Array<T>::Array(size_t n) : _tab(new T[n]), _size(n)
{}

template <typename T>
Array<T>::Array(const Array& copy)
{ *this = copy; }

template <typename T>
Array<T>::~Array<T>(void) 
{ delete [] _tab; }

/******************* Operateurs *******************/

template <typename T>
Array<T>&	Array<T>::operator=( const Array& rhs)
{
	if (this == &rhs)
		return (*this);
	this->_tab = new T[rhs._size];
	this->_size = rhs._size;
	for (int i = 0; i < rhs._size; i++)
	{
		this->_tab[i] = rhs._tab[i];
	}
	return (*this);
}

template <typename T>
T&		Array<T>::operator[]( int index )
{
	if (index >= this->_size || index < 0)
		throw Array::AccessElement();
	else
		return (_tab[index]);
}

/******************* Fonctions membres *******************/

template <typename T>
T		Array<T>::getTab(void) const
{
	return (this->_tab);
}

template <typename T>
T		Array<T>::getSize(void) const
{
	return (this->_size);
}

/******************* Exceptions *******************/

template <typename T>
const char*	Array<T>::AccessElement::what() const throw()
{
	return ("The element requested is out of scope ");
}

#endif