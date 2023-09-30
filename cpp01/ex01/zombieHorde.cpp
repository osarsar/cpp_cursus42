#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie *zhead;
    int i = 0;

    zhead = new Zombie[N];
    
    while (i < N)
    {
        zhead[i].name = name;
        i++; //delete
    }
    return (zhead);
}