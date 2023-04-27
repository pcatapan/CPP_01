#include "../inc/harl.hpp"

HARL::HARL(void)
{
	std::cout << "A wild HARL has appeared!" << std::endl << std::endl;
}


HARL::~HARL(void)
{
	std::cout << "Wild HARL flew away!" << std::endl;
}

void	HARL::debug(void)
{
	std::cout << BLUE << "[DEBUG]" << DEFAULT << std::endl;
	std::cout << "I love having extra bacon for my" << std::endl;
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl << std::endl;
}

void	HARL::info(void)
{
	std::cout << GRAY << "[INFO]" << DEFAULT << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	HARL::warning(void)
{
	std::cout << YELLOW << "[WARNING]" << DEFAULT << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	HARL::error(void)
{
	std::cout << RED << "[ERROR]" << DEFAULT << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

// Public
void	HARL::complain( std::string level )
{
	void	(HARL::*fct[4])(void) = { &HARL::debug, &HARL::info, &HARL::warning, &HARL::error };

	std::string	levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*(fct[i]))();
			break ;
		}
	}
}