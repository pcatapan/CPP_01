#include <iostream>

int	main(void)
{
	std::string string;
	std::string *stringPTR;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The memory address of the string variable : " << &string << std::endl;
	std::cout << "The memory address held by stringPTR : " << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
	std::cout << "The value of the string variable : " << string << std::endl; 
	std::cout << "The value of the stringPTR variable : " << stringPTR << std::endl; 
	std::cout << "The value of the string stringREF : " << stringREF << std::endl;

	return 0;
}
