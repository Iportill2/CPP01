#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
/* class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();
	std::string get_type();
	void setType(std::string type);
}; */
class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string weapon);
		~Weapon(void);
		std::string &	getType(void);	
		void			setType(std::string str);
};


#endif