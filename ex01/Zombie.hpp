#ifndef ZOMBIE_HPP
# define  ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:

		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie & copy);
		Zombie & operator=(Zombie const & inst);
		~Zombie();

		void 			announce();
		void			setName(std::string name);
		std::string		getName();
};
		Zombie* zombieHorde( int N, std::string name );

#endif

