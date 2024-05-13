#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string weapon);
		Weapon(const Weapon & copy);
		Weapon &operator=(Weapon const & inst);
		~Weapon(void);
		const std::string&	getType(void);	
		void				setType(std::string str);
};


#endif