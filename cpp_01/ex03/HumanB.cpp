#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}
HumanB::~HumanB()
{

}
void    HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}