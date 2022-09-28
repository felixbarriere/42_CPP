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

		int				operator>( const Fixed& nb) const;
		int				operator<( const Fixed& nb) const;
		int				operator>=( const Fixed& nb) const;
		int				operator<=( const Fixed& nb) const;
		int				operator==( const Fixed& nb) const;
		int				operator!=( const Fixed& nb) const;

		Fixed&			operator=( const Fixed& rhs);
		Fixed			operator+( const Fixed& rhs) const;
		Fixed			operator-( const Fixed& rhs) const;
		Fixed			operator*( const Fixed& rhs) const;
		Fixed			operator/( const Fixed& rhs) const;

		Fixed			operator++( void );
		Fixed			operator++( int nb);
		Fixed			operator--( void );
		Fixed			operator--( int nb);
		
		Fixed&			min(Fixed& f1, Fixed& f2);
		Fixed&			max(Fixed& f1,  Fixed& f2);
		static const Fixed&		min(const Fixed& f1, const Fixed& f2);
		static const Fixed&		max(const Fixed& f1, const Fixed& f2);

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