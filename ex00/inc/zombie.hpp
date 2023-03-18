#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie{
	
	private:
		std::string _name;
		std::string speak;
	
	public :
		void	announce(void);

		Zombie(std::string name);
		~Zombie(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif