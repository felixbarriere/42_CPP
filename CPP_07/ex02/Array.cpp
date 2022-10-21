#include "Array.hpp"

// /******************* Constructeurs *******************/

// template <typename T>
// Array::Array<T>(void) : _tab(NULL), _size(0) 
// {}

// template <typename T>
// Array::Array(unsigned int n) : _tab(new T[n]), _size(n)
// {}

// template <typename T>
// Array::Array(const Array& copy)
// { *this = copy; }

// template <typename T>
// Array::~Array<T>(void) 
// { delete [] _tab; }

// /******************* Operateurs *******************/

// template <typename T>
// Array&	Array::operator=( const Array& rhs)
// {
// 	if (this == &rhs)
// 		return (*this);
// 	this->_tab = new T[rhs->size];
// 	this->_size = rhs._size;
// 	for (int i = 0; i < rhs.size; i++)
// 	{
// 		this->_tab[i] = rhs.tab[i]
// 	}
// 	return (*this);
// }

// template <typename T>
// Array&	Array::operator[]( int index)
// {
// 	if (index > this->size)
// 		throw Array::AccessElements();
// 	else
// 		return (_tab[index]);
// }

// /******************* Fonctions membres *******************/

// // size(void) const
// // {
// // 	this->getTab().size(); //conteneur Array obligatoire?
// // }

// template <typename T>
// T	getTab(void) const
// {
// 	return (this->tab);
// }

// size_t	getSize(void) const
// {
// 	return (this->size);
// }

// /******************* Exceptions *******************/

// const char*	Array::AccessElements::what() const throw()
// { return ("The element requested is out of scope "); }