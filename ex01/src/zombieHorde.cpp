#include "../inc/zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie *zombie;
	int i;

	i = 0;
	if(N <= 0){
		return NULL;
	}
	zombie = new Zombie[N];
	while(i < N) {
		zombie[i].setName(name + std::to_string(i));
		zombie[i].announce();
		i++;
	}

	return zombie;
}
