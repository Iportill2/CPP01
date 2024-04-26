#include "filename.hpp"

int main(int ac,char **av)
{
	if(ac == 4)
	{
		Filename inst(av[1],av[2],av[3]);
		std::ifstream infile;
		char c;

		infile.open(inst.getFile());
		if(infile.is_open() == false)
			return(inst.endl_print("Cannot open the file"),0);
		if (!inst.gets1().length())
			return (inst.endl_print("s1 is Empty!"),0);
		if (!inst.gets2().length())
			return (inst.endl_print("s2 is Empty!"),0);
		while (infile.get(c) )
			inst.getTxt() = inst.getTxt() + c;
		inst.findReplaceWrite();
		infile.close();
		return(1);
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return(0);
}
