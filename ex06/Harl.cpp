#include "Harl.hpp"
Harl::Harl()
{
	_debug="DEBUG";
	_info="INFO";
	_warning="WARNING";
	_error="ERROR";
	_zero = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	_one = "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	_two = "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.";
	_three = "This is unacceptable! I want to speak to the manager now.";
	_four = "[ Probably complaining about insignificant problems ]";
}
Harl::~Harl(){}

int Harl::cmd(std::string cmd)
{
	if(cmd == _debug)
		return(0);
	else if(cmd == _info)
		return(1);
	else if(cmd == _warning)
		return(2);
	else if(cmd == _error)
		return(3);
	else
		return(4);
}

std::string Harl::getString_zero()
{
	return(_zero);
}

std::string Harl::getString_one()
{
	return(_one);
}

std::string Harl::getString_two()
{
	return(_two);
}

std::string Harl::getString_three()
{
	return(_three);
}

std::string Harl::getString_four()
{
	return(_four);
}