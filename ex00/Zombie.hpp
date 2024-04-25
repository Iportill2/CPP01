#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string 	_name;
	public:
		//CANONICAL
						Zombie();
						Zombie(std::string name);
						~Zombie();
		//GETTER
		std::string		getName();
		void			setName(std::string name);

		void 			announce( void );


};
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );

#endif