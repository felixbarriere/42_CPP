#ifndef	HARL_CPP
#define	HARL_CPP

class Harl
{
public:
	void 	complain( std::string level );


private:
	void 	debug( void );
	void 	info( void );
	void 	warning( void );
	void 	error( void );
};


#endif

