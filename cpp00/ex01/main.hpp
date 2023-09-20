#include <iostream>
#include <iomanip>

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
    Contact contact[7];

    void add_contact(int i)
    {
        std::cout<<"firstname:\n";
        std::cin>>contact[i].firstname;
        std::cout<<"lastname:\n";
        std::cin>>contact[i].lastname;
        std::cout<<"nickname:\n";
        std::cin>>contact[i].nickname;
        std::cout<<"phonenumber:\n";
        std::cin>>contact[i].phonenumber;
        std::cout<<"darkestsecret:\n";
        std::cin>>contact[i].darkestsecret;
        i++;
    }

    void affiche(int j)
    {
        int i = 0;
        std::cout<<"     index| firstname|  lastname|  nickname\n";
        while (i < j)
        {       
            std::cout<<std::setw(10)<<i + 1<<"|";
            std::cout<<std::setw(10)<<contact[i].firstname<<"|";
            std::cout<<std::setw(10)<<contact[i].lastname<<"|";
            std::cout<<std::setw(10)<<contact[i].nickname<<"|\n";
            i++;
        }
        // std::cin>>i;
        // if (i == 1)
    }
};