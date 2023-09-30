#pragma once

#include "Weapon.hpp"
class HumanA
{
    private:
        Weapon Wp;
        std::string name;

    public:
        HumanA();
        HumanA(std::string name, Weapon Wp);
        ~HumanA();
        void attack();
};