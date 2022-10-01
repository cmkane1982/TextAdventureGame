#include <iostream>

using namespace std;

class CharacterCard
{
  public:
    string charName;
    string charClass;
    int experience;
    int healthPoints;
    int magicPoints;
    int strength;
    string charActions[5] = {"Attack", "Skill", "Block", "Item", "Run"};
    string charSkills[2];
};