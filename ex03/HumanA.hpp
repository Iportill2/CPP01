#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon	&_weapon;

	public:
	//CANONICAL
		HumanA(Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);
		HumanA(const HumanA & copy);
		HumanA &operator=(HumanA const & inst);
		~HumanA(void);
		void setWeapon(Weapon &weapon);
		std::string getName();
		void	attack(void);
};

#endif