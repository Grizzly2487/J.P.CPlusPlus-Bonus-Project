#include <iostream>
#include "Game.h"
#include "Intro.h"
#include "Map.h"
#include "Player.h"

using namespace std;
//create objects of classes to call functions
Game bombSquad;
Intro welcome;
int main()
{
	//plays intro function
	welcome.introduction();
	//starts the game
	bombSquad.play();
	//ends the program
	return 0;
}