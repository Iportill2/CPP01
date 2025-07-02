#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
class Harl
{
	private:
		std::string _debug;
		std::string _info;
		std::string _warning;
		std::string _error;
		
		std::string _zero;
		std::string _one; 
		std::string _two; 
		std::string _three;
		std::string _four;
	public:
					Harl();
					~Harl();
		int 		cmd(std::string cmd);
		std::string getString_zero();
		std::string getString_one();
		std::string getString_two();
		std::string getString_three();
		std::string getString_four();
};
#endif