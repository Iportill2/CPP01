#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Contructor()" << std::endl;
}
Zombie::Zombie(std::string name)
{
	std::cout << "Create " << name  << " Zombie" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Destroy " << _name  << " Zombie" << std::endl;
}
void	Zombie::setName(std::string name)
{
	this->_name = name;
	std::cout <<"(setName)" << "Create " << _name  << " Zombie" << std::endl;
	return ;
}
void Zombie::announce()
{
	std::cout << /* this-> */_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
