#include "../inc/main.hpp"

int	main(int argc, char** argv)
{
	std::string nameFile;
	std::string strOriginal;
	std::string strReplace;

	if(argc != 4){
		std::cout << "Number of paramters incorrect";
	}

	nameFile = argv[1];
	strOriginal = argv[2];
	strReplace = argv[2];

	return 0;
}
