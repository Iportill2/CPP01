#include "Harl.hpp"
Harl::Harl()
{
	std::cout << "Constructor!" << std::endl;
	_debug="DEBUG";
	_info="INFO";
	_warning="WARNING";
	_error="ERROR";
}
Harl::~Harl()
{
		std::cout << "Destructor!" << std::endl;
}
void Harl::complain( std::string level )
{
	if (_debug == level)
		debug();
	else if(level == _info)
		info();
	else if(level == _warning)
		warning();
	else if(level == _error)
		error();
	else
		endl_print("Invalid command, please try again");
	
}
void Harl::print(std::string s)
{
	std::cout << s;
}
void Harl::endl_print(std::string s)
{
	std::cout << s << std::endl;
}
void Harl::debug()
{
	endl_print("I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!") ;
}
void Harl::info()
{
	endl_print(" cannot believe adding extra bacon costs more money. You didn´t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}
void Harl::warning()
{
	endl_print(" think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.");
}
void Harl::error()
{
	endl_print("This is unacceptable! I want to speak to the manager now.");
}