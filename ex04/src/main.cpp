#include "../inc/main.hpp"

int	main(int argc, char** argv)
{
	std::string 	nameFile;
	std::string 	strOriginal;
	std::string		strReplace;
	size_t			i;
	size_t			j;
	std::streampos	size;
	std::string		memblock;

	i = 0;
	if(argc != 4){
		std::cout << "Number of paramters incorrect" << std::endl;
		return 1;
	}

	nameFile = argv[1];
	strOriginal = argv[2];
	strReplace = argv[3];

	std::ifstream file (nameFile, std::ios::in | std::ios::binary | std::ios::ate);
	if (!file.is_open()){
		std::cout << "Erroe whene open file!" << std::endl;
		return 1;	
	}
	size = file.tellg();
	memblock.resize(size);
	file.seekg (0, std::ios::beg);
	file.read (&memblock[0], size);
	file.close();
	i = memblock.find(strOriginal);
	while (std::streampos(i) < size){
		i = memblock.find(strOriginal);
		j = 0;
		while (strReplace[j])
		{
			memblock[i] = strReplace[j];
			j++;
			i++;
		}
		std::cout << memblock[i] << std::endl;
	}
	return 0;
}
