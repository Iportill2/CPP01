#ifndef FILENAME_HPP
# define FILENAME_HPP
# include <iostream>
# include <fstream>
class Filename
{
	private:
		std::string _file;
		std::string _s1;
		std::string _s2;

	public:
		Filename();
		Filename(std::string file, std::string s1,std::string s2);
		~Filename();
		void print(std:: string s);
		void endl_print(std:: string s);
		std::string getFile();
		std::string gets1();
		std::string gets2();

};
#endif