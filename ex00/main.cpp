#include "Zombie.hpp"

int	main(void)
{
	//Crea una instancia y crea un zombie 
	Zombie instancia("paco");
	instancia.announce();
	//Crear una instancia asignando el retorno de la función newZombie que 
	//reserva memoria para un objeto y lo devuelve: luego llama al método announce.
	Zombie	*instancia1 = newZombie("pepe");
	//Llama a la función randomChum que instancia un objeto Zombie con el 
	//nombre pasado como parámetro y llama al método announce.
	randomChump("jose");
	//Los destructores se llaman automáticamente excepto para la instancia asignada 
	//que necesita ser liberada.
	delete instancia1;
	
	return(0);
}