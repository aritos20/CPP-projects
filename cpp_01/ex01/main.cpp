#include "Zombie.hpp"

int main(void)
{
    std::string name;
    int         N;
    //Zombie      *zombieHorde;

    std::cout << "Ponle un nombre a tu Zombie:" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Y pon el numero de zombies que quieres crear:" << std::endl;
    std::cin >> N;
    Zombie *zombie = zombieHorde(N, name);
    delete [] zombie;
    return 0;
}