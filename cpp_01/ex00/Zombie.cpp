#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "The Zombie has been created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed" << std::endl;
}
void	Zombie::setName(std::string newName)
{
    this->name = newName;
}
void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}