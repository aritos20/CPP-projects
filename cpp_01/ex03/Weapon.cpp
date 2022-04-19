#include "Weapon.hpp"

Weapon::Weapon(std::string nameWeapon)
{
    this->type = nameWeapon;
}
Weapon::~Weapon()
{

}
std::string Weapon::getType() const
{
    return this->type;
}
void        Weapon::setType(std::string newType)
{
    this->type = newType;
}