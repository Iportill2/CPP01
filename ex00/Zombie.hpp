#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>

class Zombie
{
	private:
		std::string 	_name;
	public:
		//CANONICAL
						Zombie();
						Zombie(std::string name);
						Zombie(const Zombie & copy);
		Zombie & 		operator=(Zombie const & inst);
						~Zombie();
		//GETTER
		std::string		getName();
		void			setName(std::string name);

		void 			announce( void );


};
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );

#endif