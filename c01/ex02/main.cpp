#include <iostream>

int main(void)
{
	std::string original = "HI THIS IS BRAIN";
	std::string *stringPTR = &original;
	std::string &stringREF = original;

	std::cout << "original Address:" << &original << std::endl;
	std::cout << "stringPTR Address:" << stringPTR << std::endl;
	std::cout << "stringREF Address:" << &stringREF << std::endl;
	
	std::cout << "original text:" << original << std::endl;
	std::cout << "stringPTR value:" << stringPTR << std::endl;
	std::cout << "stringREF value:" << stringREF << std::endl;
}