#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie *zhead;
    int i = 0;

    if (N < 0)
        return (0);
    zhead = new Zombie[N];
    
    while (i < N)
    {
        zhead[i].name = name;
        i++;
    }
    return (zhead);
}