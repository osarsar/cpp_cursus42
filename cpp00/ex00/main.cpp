#include <iostream>

int main (int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = toupper(av[1][i]);
            i++;
        }
        std::cout<<av[1];
        std::cout<<"\n";
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}