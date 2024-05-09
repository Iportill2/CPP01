#include "Zombie.hpp"
Zombie::Zombie() : _name("Unnamed")
{
	std::cout <<  this->_name << " zombie has been created with Default Constructor" << std::endl;
}
Zombie::Zombie(std::string name)//: _name(name)
{
	setName(name);
	std::cout << _name << " zombie has been created with Constructor " << std::endl;
}
Zombie & Zombie::operator=(Zombie const & inst)
{
	this->_name = inst._name;
	return (*this);
	std::cout <<  "operator=" << std::endl;
}
Zombie::Zombie(const Zombie & copy)
{
	std::cout <<  "copy" << std::endl;
	*this=copy;
}
Zombie::~Zombie()
{
	std::cout << "zombie named " << _name << " Died"<< std::endl;
}
void Zombie::announce()
{
	std::cout << this->_name << " Say: BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return this->_name;
}
void Zombie::setName(std::string name)
{
	_name = name;
}