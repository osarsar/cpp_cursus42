#include "Zombie.hpp"

int main ()
{
    Zombie *Z;

    Z = new Zombie;
    Z = Z->newZombie("oussama");
    Z->announce();
    Z->randomChump("sarsar");
    // delete Z;
}