#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed&  src);
		Fixed(const int  nb);
		Fixed(const float  nb);
		~Fixed(void);

		Fixed&			operator=( const Fixed& rhs);
		int				getRawBits(void) const;
		void 			setRawBits( int const raw );
		float 			toFloat( void ) const;
		int 			toInt( void ) const;




	private:
		int					_i;
		int	const static	_bits = 8;
};

std::ostream&	operator<<(std::ostream &os, const Fixed &rhs);


#endif