#include <iostream>
#include <iomanip>
#include <array>
#include "main.h"

using namespace std;

string combatActions[5] = {"Attack", "Skill", "Block", "Item", "Run"};
string exploreActions[6] = {"North", "East", "South", "West", "Look", "Stats"};

void beginAdventure() 
{
  clrScrn();
  cout << "Welcome Adventurer. What Shall I Call You? ";

  setEnemyStats();
  getCharName();
  clrScrn();
  getCharClass();
  clrScrn();

  displayExpActions();
  
  cout << "You awaken in a forest alone. A voice echoes in the back of your mind.\n\n";
  cout << "\"" << getName() << ", you must find and defeat the troll somewhere in this forest.\n It holds the key to you freedom. Save yourself. Save the world.\"\n\n";
  cout << "The voice vanishes in the breeze that jolts you back to reality.\n";
  cout << "You glance around to get your bearings.\n";
  
  enterRoom1();
}

void displayExpActions()
{
  string actions;

  clrScrn();
  
  cout << setfill('=') << setw(35) << left << " ";
  cout << setfill('=') << setw(35) << right << " " << endl;
  cout << setfill(' ') << setw(31) << left << " " << "ACTIONS:" << setw(31) << right << " " << endl;

  for(int index = 0; index < 6; index++)
  {
    if(index == 0)
      actions = to_string(index + 1) + ": " + exploreActions[index];
    else
      actions += "    " + to_string(index + 1) + ": " + exploreActions[index];
  }

  cout << " ";  
  cout << string((70 - actions.size()) / 2, ' ');
  cout << actions;
  cout << setfill(' ') << setw((70 - actions.size()) / 2) << right << " " << endl;

  cout << setfill('=') << setw(35) << left << " ";
  cout << setfill('=') << setw(35) << right << " " << endl << endl;
}

void enterRoom1()
{
  int exploreChoice;
  bool inRoom;

  cout << roomDescription(1);

  do
  {
    cout << "What would you like to do? (1-6): ";
    cin >> exploreChoice;
  
    switch(exploreChoice)
    {
      case 1:
        clrScrn();
        displayExpActions();
        cout << "You head North through the clearing.\n\n";
        inRoom = false;
        enterRoom2();
        break;
      case 2:
        cout << "\nYou attempt to go East. The forest blocks your way.\n\n";
        inRoom = true;
        break;
      case 3:
        cout << "\nYou attempt to go South. The forest blocks your way.\n\n";
        inRoom = true;
        break;
      case 4:
        cout << "\nYou attempt to go West. The forest blocks your way.\n\n";
        inRoom = true;
        break;
      case 5:
        clrScrn();
        displayExpActions();
        cout << roomDescription(1);
        inRoom = true;
        break;
      case 6:
        showCharStats();
        displayExpActions();
        cout << roomDescription(1);
        inRoom = true;
        break;
      default:
        cout << "\nInvalid Selection. Try Again.\n\n";
        inRoom = true;
        break;
    }
  }while(inRoom);
}

void enterRoom2()
{
  int exploreChoice;
  bool inRoom;

  cout << roomDescription(2);

  do
  {
    cout << "What would you like to do? (1-6): ";
    cin >> exploreChoice;
  
    switch(exploreChoice)
    {
      case 1:
        cout << "\nYou attempt to go East. The forest blocks your way.\n\n";
        inRoom = false;
        break;
      case 2:
        cout << "\nYou attempt to go East. The forest blocks your way.\n\n";
        inRoom = false;
        break;
      case 3:
        clrScrn();
        displayExpActions();
        cout << "You head South. Back to where you woke up.\n\n";
        inRoom = false;
        enterRoom1();
        break;
      case 4:
        cout << "\nYou attempt to go West. The forest blocks your way.\n\n";
        inRoom = false;
        break;
      case 5:
        clrScrn();
        displayExpActions();
        cout << roomDescription(2);
        inRoom = true;
        break;
      case 6:
        showCharStats();
        displayExpActions();
        cout << roomDescription(2);
        inRoom = true;
        break;
      default:
        cout << "\nInvalid Selection. Try Again.\n\n";
        inRoom = true;
        break;
    }
  }while(inRoom);
}

string roomDescription(int roomNum)
{
  string roomDesc;

  switch(roomNum)
  {
    case 1:
      roomDesc = "A crystal clear lake sits in the middle of a clearing of trees\n";
      roomDesc += "that surround you on all sides except to the north.\n\n";
      roomDesc += "A loud, guteral growl echoes from some unknown direction.\n";
      roomDesc += "The skittering of several smaller creatures can also be heard.\n\n";
      break;
    case 2:
      roomDesc = "To the North, sunlight pours into the dark forest.\n";
      roomDesc += "A vision of serene beauty amid the oppressive forest\n\n";
      roomDesc += "To the East, an angry Goblin guards a rickety rope bridge.\n\n";
      roomDesc += "To the West, you can hear the faint growl of something\n"; 
      roomDesc += "large and terrible\n\n";
      roomDesc += "To the South, the clearing you woke up in.\n\n";
      break;
  }

  return roomDesc;
}