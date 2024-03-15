#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	Zombie *inst = new Zombie(name);
	inst->announce();
	return(inst);
   /*  Zombie* newZombie = new Zombie(name);
    randomChump(name);
    return newZombie; */
	//It creates a zombie, name it, and return it so you can use it outside of the function scope.
}