#pragma once
#include <string>
using namespace std;
class Weapon
{
public:
    virtual ~Weapon(){}
    virtual int getBaseDmg() = 0;

    //吸血
    virtual int getSuckBlood() = 0;

    //定身
    virtual bool getHold() = 0;

    //获取暴击
    virtual bool getCrit() = 0;

    //是否触发效果
    bool isTrigger(int rate){
        int num = rand()%100 + 1;
        if(num < rate)
            return true;
        else
            return false;
    }
    string m_weaponName;
    int m_baseDmg;
    int critRate;
};
