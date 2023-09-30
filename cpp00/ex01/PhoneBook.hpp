#pragma once

#include "Contact.hpp"

extern int x;

class PhoneBook
{
    private:
        Contact contact[8];

    public :
        int  check_space(std::string str);
        void add_contact();
        void affiche(int j);
        void choose(int j);
};
