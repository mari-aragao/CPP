#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie* zombie2;

    zombie2 = newZombie("zombie2");
    zombie2->announce();
    newZombie("zombie3");
    randomChump("zombie4");

    delete(zombie2);
    return (0);
}