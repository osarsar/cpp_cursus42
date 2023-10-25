#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->Wp.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &Weapon) : Wp(Weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
    std::cout << "the class is destructed\n";
}