#include "../inc/zombie.hpp"

void	randomChump( std::string name ){
	Zombie *z;

	z = newZombie(name);
	z->announce();
	delete z;
}
