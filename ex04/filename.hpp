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

		std::string _fileContent;
	public:
		Filename(std::string file, std::string s1,std::string s2);
		~Filename();

		void			findReplaceWrite();

};
#endif