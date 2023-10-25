#include "Zombie.hpp"

int main ()
{
    Zombie *Z;

    Z = new Zombie;

    Z = Z->zombieHorde(4, "oussama");
    int i = 0;
    while (i < 9)
    {
        Z[i].announce();
        i++;
    }
    delete[] Z;
}