#include "Knife.h"

Knife::Knife()
{
    m_weaponName = "Knife";
    m_baseDmg = 10;
    critRate = 5;
}

int Knife::getBaseDmg()
{
    return m_baseDmg;
}

int Knife::getSuckBlood()
{
    return 0;
}

bool Knife::getHold()
{
    return false;
}

bool Knife::getCrit()
{
    return isTrigger(critRate);
}

