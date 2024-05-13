
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon		*_weapon;
	public:
	//CANONICAL
					HumanB();
					HumanB(std::string _name);
					HumanB(Weapon *_weapon);
					HumanB(const HumanB & copy);
			HumanB &operator=(HumanB const & inst);
					~HumanB(void);

		void		setWeapon(Weapon &weapon);
		std::string getName();
		void		attack(void);
};

#endif