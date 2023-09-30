#include "Contact.hpp"

std::string Contact::get_firstname()
{
    return (this->firstname);
}
std::string Contact::get_lastname()
{
    return(this->lastname);
}
std::string Contact::get_nickname()
{
    return (this->nickname);
}
std::string Contact::get_phonenumber()
{
    return (this->phonenumber);
}
std::string Contact::get_darkestsecret()
{
    return (this->darkestsecret);
}

void Contact::set_firstname(std::string name)
{
    this->firstname = name;
}

void Contact::set_lastname(std::string name)
{
    this->lastname = name;
}

void Contact::set_nickname(std::string name)
{
    this->nickname = name;
}

void Contact::set_phonenumber(std::string name)
{
    this->phonenumber = name;
}

void Contact::set_darkestsecret(std::string name)
{
    this->darkestsecret = name;
}