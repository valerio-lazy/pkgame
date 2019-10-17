#include "DragonSword.h"

DragonSword::DragonSword()
{
    m_weaponName = "DragonSword";
    m_baseDmg = 20;

    critRate = 35;
    holdRate = 30;
    suckRate = 20;
}

int DragonSword::getBaseDmg()
{
    return m_baseDmg;
}

int DragonSword::getSuckBlood()
{
    if(isTrigger(suckRate)){
        return m_baseDmg*0.5;
    }
    else
        return 0;
}

bool DragonSword::getHold()
{
    return isTrigger(holdRate);
}

bool DragonSword::getCrit()
{
    return isTrigger(critRate);
}
