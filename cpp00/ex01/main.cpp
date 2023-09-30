#include "PhoneBook.hpp"

int x;

int main ()
{
    std::string input;
    PhoneBook book;
    int flag = 0;
    int j = 0;
    while (1)
    {
        std::getline(std::cin, input);
        if (std::cin.eof())
            break;
        if (input == "EXIT")
           return(1);
        else if (input == "ADD")
        {
            flag = 1;
            book.add_contact();
            x++;
            if (j < 8)
                j++;
        }
        else if (input == "SEARCH")
        {
            book.affiche(j);
            book.choose(j);
            flag = 0;
        }
    }
}
