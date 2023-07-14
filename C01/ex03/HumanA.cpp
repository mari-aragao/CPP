#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), wpn(weapon)
{
    
}

HumanA::~HumanA(void)
{

}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->wpn.getType() << std::endl;
    return ;
}