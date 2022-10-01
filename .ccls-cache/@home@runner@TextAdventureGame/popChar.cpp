#include <iostream>
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
  int index, size = 4;
  string characterClass;
  bool validClass;

  cout << ":::::::::::::::::::: CLASSES ::::::::::::::::::::" << endl;
  
  for(index = 0; index < size; index++)
  {
    cout << ":: " << classes[index] << " ::";  
  }

  cout << "::" << endl << ":::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
  cout << "Choose your class: ";

  do
  {
    cin >> characterClass;

    index = 0;

    do
    {
      if(characterClass == classes[index])
        validClass = true;
      else
        validClass = false;

      index++;
    }while(!validClass && index < size);

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
    myCharacter.experience = 0;
    myCharacter.healthPoints = 200;
    myCharacter.magicPoints = 0;
    myCharacter.strength = 200;
    myCharacter.charSkills[0] = "Knock Down";
    myCharacter.charSkills[1] = "Barrage";
  }
  else if(characterClass == "Mage")
  {
    myCharacter.experience = 0;
    myCharacter.healthPoints = 75;
    myCharacter.magicPoints = 150;
    myCharacter.strength = 50;
    myCharacter.charSkills[0] = "Magic Missile";
    myCharacter.charSkills[1] = "Fireball";
  }
  else if(characterClass == "Rogue")
  {
    myCharacter.experience = 0;
    myCharacter.healthPoints = 100;
    myCharacter.magicPoints = 100;
    myCharacter.strength = 100;
    myCharacter.charSkills[0] = "Backstab";
    myCharacter.charSkills[1] = "Steal";
  }
  else
  {
    myCharacter.experience = 0;
    myCharacter.healthPoints = 150;
    myCharacter.magicPoints = 50;
    myCharacter.strength = 150;
    myCharacter.charSkills[0] = "Heal";
    myCharacter.charSkills[1] = "Holy Sword";
  }
}

void showChar()
{
  cout << myCharacter.charName << endl;
  cout << myCharacter.charClass << endl;
  cout << myCharacter.experience << endl;
  cout << myCharacter.healthPoints << endl;
  cout << myCharacter.magicPoints << endl;
  cout << myCharacter.strength << endl;
}