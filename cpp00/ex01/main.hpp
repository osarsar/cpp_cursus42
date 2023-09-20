#include <iostream>
#include <iomanip>
#include <string>
class Contact
{
    public:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
};

class PhoneBook
{
    public: //private
    Contact contact[8];

    void add_contact(int i)
    {
        std::cout<<"firstname: ";
        std::getline(std::cin, contact[i].firstname); 
        std::cout<<"lastname: ";
        std::getline(std::cin, contact[i].lastname); 
        std::cout<<"nickname: ";
        std::getline(std::cin, contact[i].nickname); 
        std::cout<<"phonenumber: ";
        std::getline(std::cin, contact[i].phonenumber); 
        std::cout<<"darkestsecret: ";
        std::getline(std::cin, contact[i].darkestsecret); 
    }

    void affiche(int j)
    {
        int i = 0;
        std::cout<<"|     index| firstname|  lastname|  nickname|\n";
        while (i < j)
        {
            std::cout<<"|"<<std::setw(10)<<i + 1<<"|";
            if (contact[i].firstname.length() <= 10)
                std::cout<<std::setw(10)<<contact[i].firstname<<"|";
            else
                std::cout<<std::setw(10)<<contact[i].firstname.substr(0, 9) + "."<<"|";
            if (contact[i].lastname.length() <= 10)
                std::cout<<std::setw(10)<<contact[i].lastname<<"|";
            else
                std::cout<<std::setw(10)<<contact[i].lastname.substr(0, 9) + "."<<"|";
            if (contact[i].lastname.length() <= 10)
                std::cout<<std::setw(10)<<contact[i].nickname<<"|\n";
            else
                std::cout<<std::setw(10)<<contact[i].nickname.substr(0, 9) + "."<<"|";       
            i++;
        }
    }

    void choose(int j)
    {
        int i = 0;

        if (j != 0)
        {
            std::cout<<"choose a index: ";
            std::cin >> i;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
            }
            if (i <= j && i > 0 && i < 9)
            {
                std::cout<<"firstname: "<<contact[i - 1].firstname<<"\n";
                std::cout<<"lastname: "<<contact[i - 1].lastname<<"\n"; 
                std::cout<<"nickname: "<<contact[i - 1].nickname<<"\n";
                std::cout<<"phonenumber: "<<contact[i - 1].phonenumber<<"\n";//check -nb and char   eof ctrl D                // \n "" space tab    8-->0
                std::cout<<"darkestsecret: "<<contact[i - 1].darkestsecret<<"\n";  
            }
            else
                std::cout<<"not a valid index!\n";
        }
    }
};