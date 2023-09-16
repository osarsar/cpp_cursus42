#include <iostream>

typedef struct s_list
{
    char firstname[5];
    char lastname[5];
    char nickname[5];
    int phonenumber;
    char darkestsecret[5];

}t_list;

class PhoneBook
{
    public: //private
    t_list contact[8];

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
        std::cout<<"i = "<<i;
    }

    void affiche(int j)
    {
        std::cout<<"firstname:\n";
        std::cout<<contact[j].firstname;
        std::cout<<"lastname:\n";
        std::cout<<contact[j].lastname;
        std::cout<<"nickname:\n";
        std::cout<<contact[j].nickname;
        std::cout<<"phonenumber:\n";
        std::cout<<contact[j].phonenumber;
        std::cout<<"darkestsecret:\n";
        std::cout<<contact[j].darkestsecret;
        j++;
    }
};