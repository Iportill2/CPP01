#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	int i = 0;
	while(i < N)
	{
		horde[i].setName(name +static_cast<char>(i+48));
		i++;
	}
	return(horde);
}
