#include <iostream>

using namespace std;

#ifndef __ENEMYCARD_H__
#define __ENEMYARD_H__

class Enemy
{
  public:
    int experience;
    int healthPoints;
    int magicPoints;
    int strength;
};

static Enemy orc;
static Enemy goblin;
static Enemy troll;

void setEnemyStats();

#endif