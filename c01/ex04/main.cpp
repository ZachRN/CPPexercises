#include <iostream>
#include <fstream>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Need three arguements: ./sedforlosers [file_name] [string_to_replace] [replace_with]" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string file_name = argv[1];
	std::string line;
	std::ifstream myfile;

	myfile.open(argv[1]);
	if (myfile.is_open())
	{
		file_name.append(".replace");
		std::ofstream myfile_replace(file_name);
		while ( getline(myfile, line) )
		{
			if (line == argv[2])
				myfile_replace << argv[3] << std::endl;
			else
				myfile_replace << line << std::endl;
		}
	}
	else
		std::cout << "Soemthing went wrong opening the file" << std::endl;
}