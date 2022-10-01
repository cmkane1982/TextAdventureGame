#include <iostream>
#include <iomanip>
#include <array>
#include "main.h"

using namespace std;

void getCharName()
{
  cin >> myCharacter.charName;
}

void getCharClass()
{
  string classes[] = {"Warrior", "Mage", "Rogue", "Paladin"};
  string characterClass;
  int index, charSelect, size = 4;
  bool validClass;

  cout << setfill('=') << setw(30) << left << " ";
  cout << setfill('=') << setw(30) << right << " " << endl;
  cout << setfill(' ') << setw(26) << left << " " << "CLASSES:" << setw(26) << right << " " << endl;
  
  for(index = 0; index < size; index++)
  {
    if(index == 0)
      cout << "    " << index + 1 << ": " << classes[index] << "    ";
    else if(index + 1 == size)
      cout << index + 1 << ": " << classes[index] << "     " << endl;
    else
      cout << index + 1 << ": " << classes[index] << "      ";
  }

  cout << setfill('=') << setw(30) << left << " ";
  cout << setfill('=') << setw(30) << right << " " << endl << endl;
  cout << "Choose your class (1-4): ";

  do
  {
    cin >> charSelect;

    switch(charSelect)
    {
      case 1:
        characterClass = "Warrior";
        validClass = true;
        break;
      case 2:
        characterClass = "Mage";
        validClass = true;
        break;
      case 3:
        characterClass = "Rogue";
        validClass = true;
        break;
      case 4:
        characterClass = "Paladin";
        validClass = true;
        break;
      default:
        validClass = false;
        break;
    }
    
    if(!validClass)
      cout << "Invalid Class. Choose Again: ";
  }while(!validClass);
  
  myCharacter.charClass = characterClass;

  populateStats(myCharacter.charClass);
}

void populateStats(string characterClass)
{
  if(characterClass == "Warrior")
  {
    myCharacter.level = 1;
    myCharacter.experience = 0;
    myCharacter.healthPoints = 200;
    myCharacter.magicPoints = 25;
    myCharacter.strength = 175;
    myCharacter.charSkills[0] = "Beat Down";
    myCharacter.charSkills[1] = "Barrage";
  }
  else if(characterClass == "Mage")
  {
    myCharacter.level = 1;
    myCharacter.experience = 0;
    myCharacter.healthPoints = 100;
    myCharacter.magicPoints = 250;
    myCharacter.strength = 50;
    myCharacter.charSkills[0] = "Magic Missile";
    myCharacter.charSkills[1] = "Fireball";
  }
  else if(characterClass == "Rogue")
  {
    myCharacter.level = 1;
    myCharacter.experience = 0;
    myCharacter.healthPoints = 160;
    myCharacter.magicPoints = 160;
    myCharacter.strength = 80;
    myCharacter.charSkills[0] = "Backstab";
    myCharacter.charSkills[1] = "Cripple";
  }
  else
  {
    myCharacter.level = 1;
    myCharacter.experience = 0;
    myCharacter.healthPoints = 150;
    myCharacter.magicPoints = 50;
    myCharacter.strength = 150;
    myCharacter.charSkills[0] = "Heal";
    myCharacter.charSkills[1] = "Holy Sword";
  }
}

void showCharStats()
{
  string stats;
  string skills;

  clrScrn();
  
  cout << setfill('=') << setw(35) << left << " ";
  cout << setfill('=') << setw(35) << right << " " << endl;
  cout << setfill(' ') << setw(32) << left << " " << "STATS:" << setw(32) << right << " " << endl;
  
  stats = "LVL: ";
  stats += to_string(myCharacter.level);
  stats += "    HP: ";
  stats += to_string(myCharacter.healthPoints);
  stats += "     MP: ";
  stats += to_string(myCharacter.magicPoints);
  stats += "     EXP: ";
  stats += to_string(myCharacter.experience);
  stats += "    STR: ";
  stats += to_string(myCharacter.strength);
  
  cout << " ";  
  cout << string((70 - stats.size()) / 2, ' ');
  cout << stats;
  cout << setfill(' ') << setw((70 - stats.size()) / 2) << right << " " << endl;
  
  cout << setfill(' ') << setw(32) << left << " " << "SKILLS" << setw(32) << right << " " << endl;

  skills = myCharacter.charSkills[0] + "     " + myCharacter.charSkills[1];
  
  cout << " ";  
  cout << string((70 - skills.size()) / 2, ' ');
  cout << skills;
  cout << setfill(' ') << setw((70 - skills.size()) / 2) << right << " " << endl;
  cout << setfill('=') << setw(35) << left << " ";
  cout << setfill('=') << setw(35) << right << " " << endl << endl;

  cout << "Press any key to continue...";
  cin.ignore();
  cin.get();
}

void levelUp()
{
  if(myCharacter.charClass == "Warrior")
  {
    myCharacter.level++;
    myCharacter.experience = 0;
    myCharacter.healthPoints += 200;
    myCharacter.magicPoints += 25;
    myCharacter.strength += 175;
  }
  else if(myCharacter.charClass == "Mage")
  {
    myCharacter.level++;
    myCharacter.experience = 0;
    myCharacter.healthPoints += 100;
    myCharacter.magicPoints += 250;
    myCharacter.strength += 50;
  }
  else if(myCharacter.charClass == "Rogue")
  {
    myCharacter.level++;
    myCharacter.experience = 0;
    myCharacter.healthPoints += 160;
    myCharacter.magicPoints += 160;
    myCharacter.strength += 80;
  }
  else
  {
    myCharacter.level++;
    myCharacter.experience = 0;
    myCharacter.healthPoints += 150;
    myCharacter.magicPoints += 50;
    myCharacter.strength += 150;
  }
}

void doDamage(int damage)
{
  myCharacter.healthPoints -= damage;    
}

bool isDead()
{
  bool isDead;
  
  if(myCharacter.healthPoints < 0)
    isDead = true;
  else
    isDead = false;

  return isDead;
}

string getName()
{
  return myCharacter.charName;
}

void charAttack()
{
  
}