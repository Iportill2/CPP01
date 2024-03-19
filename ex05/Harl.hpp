#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
class Harl
{
	private:

	std::string _debug;
	std::string _info;
	std::string _warning;
	std::string _error;
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

	public:

				Harl();
				~Harl();
	void 		complain( std::string level );
	void		print(std::string s);
	void		endl_print(std::string s);
};
#endif