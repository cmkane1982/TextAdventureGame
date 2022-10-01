#include <iostream>
#include <array>
#include "main.h"

using namespace std;

int main() 
{
  beginAdventure();
}

void clrScrn()
{
  cout << "\033[2J\033[1;1H";
}