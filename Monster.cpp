#include "Monster.h"

Monster::Monster()
{
    m_name = "哈士奇";
    m_atk = 70;
    m_def = 40;
    m_hp = 700;
    held = false;
}

void Monster::attack(Hero* hero)
{
    if(held)
    {
        cout << "怪兽被定身了，本回合无法攻击" << endl;
        return;
    }

    //计算伤害
    int damage = m_atk - hero->m_def;
    damage = damage>0 ? damage:1;
    hero->m_hp -= damage;

    cout << "怪兽" << m_name
         << "英雄"  << hero->m_name
         << "造成了" << damage << "伤害" << endl;

}
