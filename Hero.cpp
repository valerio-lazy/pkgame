#include "Hero.h"

Hero::Hero()
{
    m_name = "Warrior";
    m_atk = 50;
    m_def = 50;
    m_hp = 500;
    weapon = NULL;
}

Hero::Hero(string name)
{
    m_name = name;
    m_atk = 50;
    m_def = 50;
    m_hp = 500;
    weapon = NULL;
}

void Hero::equipWeap(Weapon* weapon)
{
    this->weapon = weapon;
    cout << "英雄:" << m_name
        << " 装备了武器" << this->weapon->m_weaponName
        << endl;
}

void Hero::attack(Monster* monster)
{
    //判断有无加成
    if(weapon == NULL)
    {
        cout << "英雄未装备武器,攻击结束" << endl;
        return;
    }

    //基础攻击力
    int atk = m_atk + weapon->getBaseDmg();

    //判断触发效果
    if(weapon->getHold())
    {
        monster->held = true;
    }
    else{
        monster->held = false;
    }
    if(weapon->getCrit())
    {
        atk += atk/2;
    }

    //计算伤害
    int damage = atk - monster->m_def;
    damage = damage>0 ? damage:1;

    monster->m_hp -= damage;
    m_hp += weapon->getSuckBlood();

    cout << "英雄" << m_name
         << "对怪兽" << monster->m_name
         << "造成了" << damage << "伤害" << endl;
}
