#ifndef ARRAY_TPP
#define ARRAY_TPP


template <typename T>
class Array
{
	public:
		Array(size_t n = 0LU);
		Array(const Array& copy);
		~Array<T>(void);

		class AccessElement : public std::exception
		{ 
			public: virtual const char*	what() const throw();
		};

		Array&		operator=( const Array& rhs);
		T&			operator[]( size_t index);
		const T&	operator[]( size_t index) const;

		T		getTab(void) const;
		size_t	getSize(void) const;

	private:
		T*		_tab;
		size_t	_size;
};

/* ******************************************************************* */

/******************* Constructeurs *******************/

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
	for (size_t i = 0; i < rhs._size; i++)
	{
		this->_tab[i] = rhs._tab[i];
	}
	return (*this);
}

template <typename T>
T&		Array<T>::operator[]( size_t index )
{
	if (index >= this->_size)
		throw Array::AccessElement();
	else
		return (_tab[index]);
}

template <typename T>
const T&	Array<T>::operator[]( size_t index ) const
{
	if (index >= this->_size)
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
size_t		Array<T>::getSize(void) const
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