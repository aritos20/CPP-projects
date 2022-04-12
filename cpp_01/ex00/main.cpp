#include "Zombie.hpp"

int main(void)
{
    std::string name;
    std::cout << "Ponle un nombre a tu Zombie:" << std::endl;
    std::getline(std::cin, name);
    Zombie *zombie = newZombie(name);
    zombie->announce();
    delete zombie;
    randomChump(name);
    return 0;
}