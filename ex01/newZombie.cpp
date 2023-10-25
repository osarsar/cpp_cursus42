#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *Z1;

    Z1 = new Zombie;
    Z1->name = name;
    return (Z1);
}