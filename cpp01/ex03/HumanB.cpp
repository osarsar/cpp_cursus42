#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->name << " attack their " << this->Wp.getType();
}