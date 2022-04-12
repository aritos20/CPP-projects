#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
	std::string name;

	public:
	Zombie();
	~Zombie();

	void	setName(std::string newName);

	void	announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif