#include <iostream>
#include <iomanip>
#include <array>
#include "main.h"

using namespace std;

void setEnemyStats()
{
  goblin.experience = 1;
  goblin.healthPoints = 25;
  goblin.magicPoints = 25;
  goblin.strength = 25;
  
  orc.experience = 2;
  orc.healthPoints = 50;
  orc.magicPoints = 0;
  orc.strength = 50;

  troll.experience = 5;
  troll.healthPoints = 100;
  troll.magicPoints = 0;
  troll.strength = 100;
}

int enemyAttack()
{
  int enemyDamage = 1;
  
  return enemyDamage;
}

int defeatEnemy(int enemyExp)
{
  return enemyExp;
}