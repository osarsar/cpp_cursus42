#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->Wp.getType();
}

HumanA::HumanA(std::string name, Weapon Wp)
{
    this->name = name;
    this->Wp = Wp;
}

HumanA::HumanA()
{
    std::cout << "the constructer is created\n";
}

HumanA::~HumanA()
{
    std::cout << "the class is destructed\n";
}