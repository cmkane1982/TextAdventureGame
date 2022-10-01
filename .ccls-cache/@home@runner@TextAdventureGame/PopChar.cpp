#include <iostream>
#include <array>
#include "CharacterCard.h"

using namespace std;

void getCharClass(string classes[], int size)
{
  int index;
  string characterClass;
  bool validClass;

  cout << ":::::::::::::CLASSES::::::::::::" << endl;
  
  for(index = 0; index < size; index++)
  {
    cout << "::" << classes[index];  
  }

  cout << "::" << endl << "::::::::::::::::::::::::::::::::" << endl;
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
}

void populateStats(string characterClass)
{
  if(characterClass == "Warrior")
  {
    myCharacter.experience = 0;
    myCharacter.healthPoints = 200;
    myCharacter.magicPoints = 0;
    myCharacter.strength = 200;
    myCharacter.charSkills[0] = "";
    myCharacter.charSkills[1] = "";
  }
  else if(characterClass == "Mage")
  {
    myCharacter.experience = 0;
    myCharacter.healthPoints = 75;
    myCharacter.magicPoints = 150;
    myCharacter.strength = 50;
    myCharacter.charSkills[0] = "Magic Missile";
    myCharacter.charSkills[1] = "";
  }
  else if(characterClass == "Rogue")
  {
    myCharacter.experience = 0;
    myCharacter.healthPoints = 100;
    myCharacter.magicPoints = 100;
    myCharacter.strength = 100;
    myCharacter.charSkills[0] = "";
    myCharacter.charSkills[1] = "";
  }
  else
  {
    myCharacter.experience = 0;
    myCharacter.healthPoints = 150;
    myCharacter.magicPoints = 50;
    myCharacter.strength = 150;
    myCharacter.charSkills[0] = "";
    myCharacter.charSkills[1] = "";
  }
}