#pragma once
#include "Weapon.h"

class Knife : public Weapon
{
public:
    Knife();
    virtual int getBaseDmg();
    virtual int getSuckBlood();
    virtual bool getHold();
    virtual bool getCrit();
};
