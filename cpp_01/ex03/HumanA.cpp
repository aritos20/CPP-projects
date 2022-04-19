#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon): name(name), weapon(newWeapon)
{

}
HumanA::~HumanA()
{

}
void    HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}