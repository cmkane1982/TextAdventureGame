#include <iostream>
#include <array>
#include "main.h"

using namespace std;

void beginAdventure() 
{
  string combatActions[5] = {"Attack", "Skill", "Block", "Item", "Run"};
  string exploreActions[5] = {"North", "East", "South", "West", "Stats"}
  
  clrScrn();
  cout << "Welcome Adventurer. What Shall I Call You? ";

  setEnemyStats();
  getCharName();
  clrScrn();
  getCharClass();
  clrScrn();
}