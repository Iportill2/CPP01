#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];//reservamos memoria para un array de Zombie
	int i = 0;
	while(i < N)
	{	//creamos la funcion setname para poder crear nombres aleatorios
		horde[i].setName(name +static_cast<char>(i+'0'));
		
		i++;
	}
	return(horde);//devuelve un puntero de zombies
}
