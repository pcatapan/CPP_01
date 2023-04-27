#ifndef HARL_HPP
# define HARL_HPP

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define GRAY "\001\033[1;90m\002"
# define BLUE "\001\033[1;34m\002"

#include <iostream>

class HARL
{
	private :
		void	debug(void);
		void	info(void);
		void	error(void);
		void	warning(void);

	public :
		HARL(void);
		~HARL(void);
		void complain(std::string level);
};

#endif