#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string weapon);
		~Weapon(void);
		std::string &	getType(void);	
		void			setType(std::string str);
};


#endif