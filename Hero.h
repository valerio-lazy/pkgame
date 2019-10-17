#pragma once

#include <iostream>
#include <string>
#include "Weapon.h"
#include "Monster.h"
using namespace std;

/* class Weapon; */
class Monster;

class Hero
{
public:
    Hero();
    Hero(string);

    void equipWeap(Weapon*);
    void attack(Monster*);

    string m_name;  //角色名
    int m_atk;      //攻击力
    int m_def;      //防御力
    int m_hp;       //血量
    Weapon* weapon; //武器
};
