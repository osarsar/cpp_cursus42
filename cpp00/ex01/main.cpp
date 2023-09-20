#include "main.hpp"

int main (int ac, char **av)
{
    char input[5];
    PhoneBook book;
    int flag = 0;
    int i = 0;
    int j = 0;

    while (1)
    {
        std::cin>>input;
        if (std::strcmp(input, "EXIT") == 0)
           exit(0);
        else if (std::strcmp(input, "ADD") == 0)
        {
            flag = 1;
            book.add_contact(i);
            i++;
        }
        else if (std::strcmp(input, "SEARCH") == 0)
        {
            if (flag == 1)
                j++;
            book.affiche(j);
            flag = 0;
        }
    }
}