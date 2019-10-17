#pragma once
#include <iostream>
#include <string>
#include "Hero.h"

using namespace std;
class Hero;

class Monster
{
public:
    Monster();
    void attack(Hero*);

    string m_name;  //名称
    int m_atk;  //攻击力
    int m_def;  //防御力
    int m_hp;   //血量
    bool held;  //被定身状态
};
