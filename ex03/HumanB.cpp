#include "HumanB.hpp"
/* HumanB::HumanB(Weapon weapon)  : _weapon(weapon) 
{
	std::cout << "createHumanB()" << std::endl;
}
HumanB(std::string name) ; Weapon(_weapon)
{
	std::cout << "createHumanB " << name << std::endl;
	Weapon _weapon = Weapon("fist");
	_name = name;
	//_name._weapon.setType = "fist";
}
HumanB::~HumanB()
{
	std::cout << "destroyHumanB" << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	std::cout << _name << " has taken a ";
	_weapon = weapon.get_type();
	//std::cout << "setWeaponHumanB " << weapon << std::endl;
	std::cout << _weapon.get_type() << std::endl;
}
void HumanB::attack()
{
	//_weapon = Weapon.get_type();
	std::cout << _name << " attack with " ;
	std::cout << this->_ weapon.get_type() << std::endl;
}  
*/
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	std::cout << this->_name << " does not have any weapon 😨"
				<< std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " died 😢" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with "
			<< this->_weapon->getType() << std::endl;
}
