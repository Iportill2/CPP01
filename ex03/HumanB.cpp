#include "HumanB.hpp"
//CANONICAL
HumanB::HumanB() : _weapon()
{
	this->_name = "Undefined Name";
	this->_weapon = NULL;
	std::cout << this->_name << " does not have any weapon 😨"
	<< std::endl;
}

HumanB::HumanB(std::string name) : _weapon()
{
	this->_name = name;
	this->_weapon = NULL;
	std::cout << this->_name << " does not have any weapon 😨"
	<< std::endl;
}
HumanB::HumanB(Weapon *_weapon) : _weapon()
{
	this->_name = "Undefined Name";
	this->_weapon = _weapon;
		std::cout << this->_name << " has taken a " 
				<< this->_weapon->getType() << std::endl;
}
HumanB::HumanB(const HumanB & copy) 
{
	this->_name = copy._name;
	this->_weapon = copy._weapon;
}
HumanB& HumanB::operator=(const HumanB& inst)
{
	this->_name = inst._name;
	this->_weapon = inst._weapon;
	return *this;
}
HumanB::~HumanB(void)
{
	std::cout << this->_name << " died 😢" << std::endl;
}
/////////////////////////////////////////////////////////////
void	HumanB::setWeapon(Weapon &weapon)
{
	//this->_weapon = NULL;
/*     if (this->_weapon != NULL) */
        this->_weapon = &weapon;
/*     else 
        std::cout << "Error: Weapon not set" << std::endl; */ 
}

std::string HumanB::getName()
{
	return(this->_name);
}
void HumanB::attack() 
{
    if (this->_weapon != NULL)
        std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " attacks unarmed" << std::endl;

	//std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}
