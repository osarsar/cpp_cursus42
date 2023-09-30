#include "PhoneBook.hpp"

int PhoneBook::check_space(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (isspace(str[i]))
            return (1);
        i++;
    }
    return (0);
}

void PhoneBook::add_contact()
{
    std::string input;

    if (x % 8 == 0)
        x = 0;
    std::cout<< "firstname: ";
    std::getline(std::cin, input);
    contact[x].set_firstname(input);
    while (check_space(contact[x].get_firstname()) == 1 || contact[x].get_firstname().empty())
    {
        std::cout<< "firstname: ";
        std::getline(std::cin, input);
        contact[x].set_firstname(input);
        if (std::cin.eof())
            return;
    }
    std::cout<<"lastname: ";
    std::getline(std::cin, input);
    contact[x].set_lastname(input);
    while (check_space(contact[x].get_lastname()) == 1 || contact[x].get_lastname().empty())
    {
        std::cout<<"lastname: ";
        std::getline(std::cin, input);
        contact[x].set_lastname(input);
        if (std::cin.eof())
            return;
    }
    std::cout<<"nickname: ";
    std::getline(std::cin, input);
    contact[x].set_nickname(input);
    while (check_space(contact[x].get_nickname()) == 1 || contact[x].get_nickname().empty())
    {
        std::cout<<"nickname: ";
        std::getline(std::cin, input);
        contact[x].set_nickname(input);
        if (std::cin.eof())
            return;
    }
    std::cout<<"phone number: ";
    std::getline(std::cin, input);
    contact[x].set_phonenumber(input);
    if (std::cin.eof())
        return;
    int i = 0;
    while (contact[x].get_phonenumber()[i] || check_space(contact[x].get_phonenumber()) == 1 || contact[x].get_phonenumber().empty())
    {
        if(!isnumber(contact[x].get_phonenumber()[i]))
        {
            std::cout<<"phone number: ";
            std::getline(std::cin, input);
            contact[x].set_phonenumber(input);
            i = 0;
        }
        else
            i++;
    }
    std::cout<< "darkest secret: ";
    std::getline(std::cin, input);
    contact[x].set_darkestsecret(input);
    while (check_space(contact[x].get_darkestsecret()) == 1 || contact[x].get_darkestsecret().empty())
    {
        std::cout<< "darkest secret: ";
        std::getline(std::cin, input);
        contact[x].set_darkestsecret(input);
        if (std::cin.eof())
            return;
    }
}

void PhoneBook::affiche(int j)
{
    int i = 0;
    std::cout<<"|     index| firstname|  lastname|  nickname|\n";
    while (i < j)
    {
        std::cout<<"|"<<std::setw(10) << i + 1 << "|";
        if (contact[i].get_firstname().length() <= 10)
            std::cout<<std::setw(10) << contact[i].get_firstname()<<"|";
        else
            std::cout<<std::setw(10) <<contact[i].get_firstname().substr(0, 9) + "."<<"|";

        if (contact[i].get_lastname().length() <= 10)
            std::cout<<std::setw(10)<<contact[i].get_lastname()<<"|";
        else
            std::cout<<std::setw(10)<<contact[i].get_lastname().substr(0, 9) + "."<<"|";

        if (contact[i].get_nickname().length() <= 10)
            std::cout<<std::setw(10)<<contact[i].get_nickname()<<"|\n";
        else
            std::cout<<std::setw(10)<<contact[i].get_nickname().substr(0, 9) + "."<<"|\n";       
        i++;
    }
}

void PhoneBook::choose(int j)
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
            std::cout<<"firstname: "<<contact[i - 1].get_firstname()<<"\n";
            std::cout<<"lastname: "<<contact[i - 1].get_lastname()<<"\n"; 
            std::cout<<"nickname: "<<contact[i - 1].get_nickname()<<"\n";
            std::cout<<"phonenumber: "<<contact[i - 1].get_phonenumber()<<"\n";
            std::cout<<"darkestsecret: "<<contact[i - 1].get_darkestsecret()<<"\n";  
        }
        else
            std::cout<<"not a valid index!\n";
    }
}