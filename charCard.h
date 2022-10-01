#include <iostream>

using namespace std;

#ifndef __CHARCARD_H__
#define __CHARCARD_H__

class Character
{
  public:
    int level;
    string charName;
    string charClass;
    int experience;
    int healthPoints;
    int magicPoints;
    int strength;
    string charSkills[2];
};

static Character myCharacter;

void getCharName();
void getCharClass();
void populateStats(string charClass);
void showCharStats();
string getName();

#endif