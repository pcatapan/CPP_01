#include "harl.hpp"

HARL::HARL(void)
{
	std::cout << "A wild HARL has appeared!" << std::endl;
}


HARL::HARL(void)
{
	std::cout << "Wild HARL flew away!" << std::endl;
}

void	HARL::debug(void)
{
	std::cout << BLUE << "[DEBUG]" << DEFAULT << std::endl;
	std::cout << "I love having extra bacon for my" << std::endl;
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	HARL::info(void)
{
	std::cout << GRAY << "[INFO]" << DEFAULT << std::cout;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}