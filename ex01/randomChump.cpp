#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie Z2;

    Z2.name = name;
    Z2.announce();
}