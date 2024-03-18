#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
/* class HumanB
{
private:
	std::string _name;
	Weapon _weapon;

public:
	HumanB(Weapon weapon) : _weapon(weapon) {}
	HumanB(std::string name): Weapon(_weapon) {};
	~HumanB();
	void attack();
	void setWeapon(Weapon weapon);
}; */
class HumanB
{
	private:
		std::string _name;
		Weapon		*_weapon;
		
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};



#endif