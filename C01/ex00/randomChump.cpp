#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  newZ;

    newZ.setName(name);
    newZ.announce();
}