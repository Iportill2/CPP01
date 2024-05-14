#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
class Harl
{
	private:
		std::string _warning;
		std::string _error;
		
		std::string _two; 
		std::string _three;
		std::string _four;
	public:
					Harl();
					~Harl();
		std::string getString();
		void 		print(std::string s);
		void 		endl_print(std::string s);
		int 		cmd(std::string cmd);
		std::string getString_two();
		std::string getString_three();
		std::string getString_four();
};
#endif