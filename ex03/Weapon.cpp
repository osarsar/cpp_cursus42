#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return(this->type);
}

void    Weapon::setType(std::string name)
{
    this->type = name;
}

Weapon::Weapon()
{
    std::cout << "the constructer is created\n";
}
Weapon::Weapon(std::string name)
{
    this->type = name;
}

Weapon::~Weapon()
{
    std::cout << "the class is destructed\n";
}