#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): _type(weapon){}
Weapon::~Weapon(void){}
std::string&	Weapon::getType(void){return (this-> _type);}
void	Weapon::setType(std::string str){this->_type = str;}