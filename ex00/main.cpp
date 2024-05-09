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

// int interactive()
// {
// 	while(1)
// 	{
// 		std::cout << "Please, insert name of zombie" << std::endl;
//   		std::string s;
// 		std::getline (std::cin,s);
// 		if (std::cin.eof()) //if eof/ctrl+D terminate
// 		{
// 			std::cout << "Caution you push Ctrl+D = eof" << std::endl;
// 			return (0);
// 		}
// 		else
// 		{
// 			if (s == "q")
// 				return 0;
// 			if(s.empty())
// 			{
// 				Zombie inst2;
// 				inst2.announce();
// 				std::cout << "You like to rename a zombie? Y/N" << std::endl;
// 				std::getline (std::cin,s);
// 				if (std::cin.eof()) //if eof/ctrl+D terminate
// 				{
// 					std::cout << "Caution you push Ctrl+D = eof" << std::endl;
// 					return (0);
// 				}
// 				else
// 				{
// 					if(s == "Y")
// 					{
// 						std::cout << "Please, enter the new name" << std::endl;
// 						std::getline (std::cin,s);

// 						if (std::cin.eof()) //if eof/ctrl+D terminate
// 						{
// 							std::cout << "Caution you push Ctrl+D = eof" << std::endl;
// 							return (0);
// 						}
// 						else
// 						{
// 							inst2.setName(s);
// 							std::cout << "The New name of the zombie is "<< inst2.getName() << std::endl;
// 						}
// 				else
// 						inst2.setName(s);
// 						std::cout << "The New name of the zombie is "<< inst2.getName() << std::endl;
// 					}
// 					else if (s == "N")
// 					{
// 						std::cout << "The name of the zombie is "<< inst2.getName() << std::endl;
// 					}
// 				}

// 			}
// 			else if(s.empty() == false)
// 			{
// 				Zombie inst(s);
// 				inst.announce();
// 			}

// 		}
// 	}
// }

int main()
{
	std::cout << "*****************" << std::endl;
	Zombie a;
	std::cout << "1 Zombie a name is " << a.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	Zombie b("pepe");
	std::cout << "2 Zombie a name is " << a.getName() << std::endl;
	std::cout << "3 Zombie b name is " << b.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	Zombie c(a);
	std::cout << "4 Zombie a name is " << a.getName() << std::endl;
	std::cout << "5 Zombie b name is " << b.getName() << std::endl;
	std::cout << "6 Zombie c name is " << c.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	c = b;
	std::cout << "7 Zombie a name is " << a.getName() << std::endl;
	std::cout << "8 Zombie b name is " << b.getName() << std::endl;
	std::cout << "9 Zombie c name is " << c.getName() << std::endl;
	std::cout << "*****************" << std::endl;
	std::cout << "Use announce in a, b , c:" << std::endl;
	std::cout << "*****************" << std::endl;
	a.announce();
	b.announce();
	c.announce();

	std::cout << "*****************" << std::endl;
	std::cout << "Use setName in a, b , c:" << std::endl;
	a.setName("a");
	b.setName("b");
	c.setName("c");
	std::cout << "*****************" << std::endl;
	a.announce();
	b.announce();
	c.announce();

	std::cout << "memory direction of a is:" << &a << std::endl;
	std::cout << "memory direction of b is:" << &b << std::endl;
	std::cout << "memory direction of c is:" << &c << std::endl;

	std::cout << "-------------------------------------------" << std::endl;
	Zombie	*d = NULL;
	std::cout << "memory direction of d is:" << d << std::endl;
	d = newZombie("PACO");
	std::cout << "memory direction of d is:" << d << std::endl;
	Zombie *e = NULL;
	std::cout << "memory direction of e is:" << e << std::endl;
	e = d;
	std::cout << "memory direction of e is:" << e << std::endl;
	d->announce();
	e->announce();
	randomChump("randomChump");	
	

	delete d;
	//delete e;
}
