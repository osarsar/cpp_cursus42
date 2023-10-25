#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->Wp->getType() << std::endl;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    std::cout << "the class is destructed\n";
}

void HumanB::setWeapon(Weapon *Weapon)
{
    this->Wp = Weapon;
}