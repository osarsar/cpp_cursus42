#include "main.hpp"

int main (int ac, char **av)
{
    std::string input;
    PhoneBook book;
    int flag = 0;
    int i = 0;
    int j = 0;

    while (1)
    {
        std::getline(std::cin, input);    //clear_getline
        if (std::cin.eof())
            break;
        if (input == "EXIT")
           exit(0);
        else if (input == "ADD")
        {
            flag = 1;
            book.add_contact(i);
            i++;
            j++;
        }
        else if (input == "SEARCH")
        {
            // if (flag == 1)
            //     j++;
            book.affiche(j);
            flag = 0;
        }
    }
}
