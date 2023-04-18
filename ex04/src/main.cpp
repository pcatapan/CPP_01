#include "../inc/main.hpp"

int main(int argc, char *argv[])
{
	char			c;
	size_t			i;
	size_t			pos;
	std::string		str;
	std::ifstream	input;
	std::ofstream	output;

	if (argc != 4)
	{
		std::cout << "This program accepts 3 parameters, in this order: ";
		std::cout << "Filename and two strings." << std::endl;
		return (1);
	}
	input.open(argv[1], std::ios::in);
	if (input.fail())
		std::cout << "Error: problem opening the: " << argv[1] << std::endl;
	while (input.get(c))
		str += c;
	input.close();
	output.open((std::string(argv[1]) + ".replace").c_str() , std::ios::out);
	if (output.fail())
		std::cout << "Error: problem with the creation of new file" << std::endl;
	i = 0;
	while (i < str.size())
	{
		pos = str.find(argv[2], i);
		if (pos != (size_t)-1)
		{
			while (i < pos)
				output << str[i++];
			if (i == pos)
				output << argv[3];
			i += strlen(argv[2]);
		}
		else
			output << str[i++];
	}
	output.close();
	return (0);
}