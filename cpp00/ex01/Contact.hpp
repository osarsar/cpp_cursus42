#pragma once


#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
    public :
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkestsecret();
        void set_firstname(std::string name);
        void set_lastname(std::string name);
        void set_nickname(std::string name);
        void set_phonenumber(std::string name);
        void set_darkestsecret(std::string name);
};

