#pragma once

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *Wp;
        std::string name;

    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon *Wp);
};