#include "../inc/zombie.hpp"

void    Zombie::announce(void)
{
		std::cout << _name << ": " << speak << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
	speak = "BraiiiiiiinnnzzzZ...";
}

Zombie::Zombie(void)
{
	std::cout << "Zombie" << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << ": " << "die." << std::endl;
}
