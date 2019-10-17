#pragma once
#include "Weapon.h"

class DragonSword : public Weapon
{
public:
    DragonSword();
    virtual int getBaseDmg();
    virtual int getSuckBlood();
    virtual bool getHold();
    virtual bool getCrit();

private:
    int holdRate;
    int suckRate;
};
