#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	Zombie *inst = new Zombie(name);
	inst->announce();
	return(inst);
}