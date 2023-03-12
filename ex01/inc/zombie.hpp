#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie{
	
	private:
		std::string name;
	
	public :
		void	announce(void);
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );
		Zombie()
		{
			std::string speak = "BraiiiiiiinnnzzzZ...";
		};
		~Zombie(void);
};

#endif