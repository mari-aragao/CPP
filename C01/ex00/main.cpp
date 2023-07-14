#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie* zombie1;

    zombie1 = newZombie("zombie1");
    zombie1->announce();
    randomChump("zombie2");

    delete(zombie1);
    return (0);
}