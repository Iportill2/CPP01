#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon):
_name("Undefined Name"), _weapon(weapon)
{
	std::cout << this->_name << " has taken a " 
				<< this->_weapon.getType() << std::endl;
}
HumanA::HumanA(std::string name, Weapon &weapon):
_name(name), _weapon(weapon)
{
	std::cout << this->_name << " has taken a " 
				<< this->_weapon.getType() << std::endl;
}
HumanA::HumanA(const HumanA & copy) : _weapon(copy._weapon)
{
    this->_name = copy._name;
	this->_weapon = copy._weapon;
}
HumanA& HumanA::operator=(HumanA const & inst)
{
	this->_name = inst._name;
	this->_weapon = inst._weapon;
	return(*this);
}
HumanA::~HumanA(void)
{
	std::cout << this->_name << " died 😢" << std::endl;
}
///////////////////////////////////////////////////////////
void	HumanA::setWeapon(Weapon &weapon)
{
        this->_weapon = weapon;
}

std::string HumanA::getName()
{
	return(this->_name);
}
void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}