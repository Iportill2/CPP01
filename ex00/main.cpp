#include "Zombie.hpp"

/* int	main(void)
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
} */

int main()
{
	while(1)
	{
		std::cout << "Please, insert name of zombie" << std::endl;
  		std::string s;
		std::getline (std::cin,s);
		if (std::cin.eof()) //if eof/ctrl+D terminate
		{
			std::cout << "Caution you push Ctrl+D = eof" << std::endl;
			return (0);
		}
		else
		{
			if (s == "q")
				return 0;
			if(s.empty())
			{
				Zombie inst2;
				inst2.announce();
				std::cout << "You like to rename a zombie? Y/N" << std::endl;
				std::getline (std::cin,s);
				if (std::cin.eof()) //if eof/ctrl+D terminate
				{
					std::cout << "Caution you push Ctrl+D = eof" << std::endl;
					return (0);
				}
				else
				{
					if(s == "Y")
					{
						std::cout << "Please, enter the new name" << std::endl;
						std::getline (std::cin,s);

						if (std::cin.eof()) //if eof/ctrl+D terminate
						{
							std::cout << "Caution you push Ctrl+D = eof" << std::endl;
							return (0);
						}
						else
						{
							inst2.setName(s);
							std::cout << "The New name of the zombie is "<< inst2.getName() << std::endl;
						}
				else
						inst2.setName(s);
						std::cout << "The New name of the zombie is "<< inst2.getName() << std::endl;
					}
					else if (s == "N")
					{
						std::cout << "The name of the zombie is "<< inst2.getName() << std::endl;
					}
				}

			}
			else if(s.empty() == false)
			{
				Zombie inst(s);
				inst.announce();
			}

		}
	}
	return(0);
}
