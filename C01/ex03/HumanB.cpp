#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{

}

HumanB::~HumanB(void)
{

}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->wpn->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->wpn = &weapon;
    return ;
}