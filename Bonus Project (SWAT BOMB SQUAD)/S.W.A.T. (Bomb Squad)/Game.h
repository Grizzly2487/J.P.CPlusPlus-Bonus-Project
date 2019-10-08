#pragma once
#include "Map.h"
#include "Player.h"
class Player;

class Game
{
public:
	int play();
	Player inventory;
	Map myMap;
private:
	const int MAX_TURNS = 14;
	int choice;
	static const int NUM_NUMBERS = 10;
};
