#include "../inc/zombie.hpp"

int main(void)
{
	int	count;
	Zombie *horde;

	count = 5;

	horde = zombieHorde(count, "monster");
	delete[] horde;

	return 0;
}
