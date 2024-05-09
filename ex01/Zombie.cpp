#include "Zombie.hpp"

Zombie::Zombie() : _name("Name_by_Default")
{
	std::cout << "Default Contructor create "<< getName() << " zombie" << std::endl;
}
Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Create " << getName()  << " Zombie" << std::endl;
}
Zombie & Zombie::operator=(Zombie const & inst)
{
	//std::cout <<  "operator=" << std::endl;
	this->_name = inst._name;
	return (*this);
}
Zombie::Zombie(const Zombie & copy)
{
	//std::cout <<  "copy" << std::endl;
	*this=copy;
}
Zombie::~Zombie()
{
	std::cout << "Destroy " << getName()  << " Zombie" << std::endl;
}
void	Zombie::setName(std::string name)
{
	//std::cout << "Create " << getName()  << " Zombie" << std::endl;
	this->_name = name;
	return ;
}
std::string Zombie::getName()
{
	return(this->_name);
}
void Zombie::announce()
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
