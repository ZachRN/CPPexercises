#include <iostream>
#include <fstream>
#include <map>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "The incorrect amount of arguements were provided." << std::endl;
		return (1);
	}
	
	//This is all loading informaiton from the first csv file given.
	std::ifstream csvFile;
	
	csvFile.open("data.csv");
	if(!csvFile.is_open())
	{
		std::cout << ".csv File couldn't be opened" << std::endl;
		return (1);
	}
	std::map<std::string, float> myMap;
	std::string line;
	int delimPos = 0;
	getline(csvFile, line);
	while(getline(csvFile, line))
	{
		delimPos = line.find(",");
		myMap.insert(std::make_pair(line.substr(0, delimPos), std::stof(line.substr(delimPos + 1, line.length()))));
	}
	csvFile.close();

	//This is running through the informtion on the provided file
	std::ifstream inputFile;
	
	inputFile.open(argv[1]);
	if(!inputFile.is_open())
	{
		std::cout << "Couldn't open input file." << std::endl;
		return (1);
	}
	//reusing line variable to not make a new one;
	getline(inputFile, line);
	std::string date;
	std::string num;
	while(getline(inputFile, line))
	{
		delimPos = line.find("|");
		if (delimPos == -1)
		{
			std::cout << "Error: line had no delimitered => " << line << std::endl;
			continue;
		}
		//trimming starting and ending spaces of string triming date SUFFIXa nd num PREFIX
		date = line.substr(0, delimPos);
		date = date.erase(date.find_last_not_of(' ') + 1);
		num = line.substr(delimPos + 1, line.length());
		num = num.erase(0, num.find_first_not_of(' '));
		
		std::cout << date << "[]" << num << "[]" << delimPos << std::endl;
		// std::cout << delimPos << std::endl;
	}
	std::cout << "end" << std::endl;
	return (0);
}