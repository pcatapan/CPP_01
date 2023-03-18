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
		void	setName(std::string name);

		Zombie(void);
		~Zombie(void);
};

Zombie*	zombieHorde( int N, std::string name );

#endif