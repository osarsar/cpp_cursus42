#include <iostream>
#include <string>

int main (int ac, char **av)
{
    int j;

    j = 1;
    if (ac != 1)
    {
        while (av[j])
        {
            std::string str(av[j]);
            for (size_t i = 0; i < str.size(); i++)
                str[i] = toupper(str[i]);
            std::cout << str;
            j++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}