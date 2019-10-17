#include <iostream>
#include "Hero.h"
#include "Monster.h"
#include "Knife.h"
#include "DragonSword.h"
using namespace std;

void test01()
{
    Hero hero("Valerio");
    Knife knife;
    DragonSword dsword;
    Monster monster;

    hero.equipWeap(&dsword);
    while(1)
    {
        hero.attack(&monster);
        monster.attack(&hero);
        if(hero.m_hp < 0 || monster.m_hp < 0){
            cout << "游戏结束" << endl;
            break;
        }
    }
}

/* void switchWeapon(Hero* hero) */
/* { */
/*     Knife* knife = new Knife; */
/*     DragonSword* ds = new DragonSword; */
/*     int opt = 0; */
/*     cout << "请选择武器"<< endl; */
/*     cout << "1、赤手空拳    2、小刀    3、屠龙宝刀" << endl; */
/*     cin >> opt; */
/*     switch(opt){ */
/*     case 1: */
/*         cout << "你还是太嫩了" << endl; break; */
/*     case 2: */
/*         hero->equipWeap(knife); break; */
/*     case 3: */
/*         hero->equipWeap(ds);    break; */
/*     } */

/*     getchar(); */
/*     getchar(); */
/*     delete knife; */
/*     delete ds; */
/* } */

void startGame(Hero* hero, Monster* monster)
{
    Knife* knife = new Knife;
    DragonSword* ds = new DragonSword;
    int opt = 0;
    cout << "请选择武器"<< endl;
    cout << "1、赤手空拳    2、小刀    3、屠龙宝刀" << endl;
    cin >> opt;
    switch(opt){
    case 1:
        cout << "你还是太嫩了" << endl; break;
    case 2:
        hero->equipWeap(knife); break;
    case 3:
        hero->equipWeap(ds);    break;
    }

    getchar();
    getchar();
    system("clear");
    int round = 1;
    
    while(true){
        getchar();
        system("clear");
        cout << "\t\t第 " << round++ << " 回合\t\t" << endl;
        hero->attack(monster);
        cout << "bug" << endl;
        if(monster->m_hp <= 0){
            cout << "怪兽" << monster->m_name
                << "已死，游戏结束" << endl;
            break;
        }

        monster->attack(hero);
        if(hero->m_hp <= 0){
            cout << "英雄" << hero->m_name
                << "已死，游戏结束" << endl;
            break;
        }

        cout << "英雄" << hero->m_name << "剩余血量:" << hero->m_hp << endl;
        cout << "怪兽" << monster->m_name << "剩余血量:" << monster->m_hp << endl;
    }
    delete knife;
    delete ds;
}
int main()
{
    /* test01(); */
    Hero* hero= new Hero("valerio");
    Monster* monster = new Monster;
    /* switchWeapon(hero); */
    startGame(hero, monster);
    cout << hero->weapon->m_weaponName << endl;
    delete hero;
    delete monster;
    return 0;
}
