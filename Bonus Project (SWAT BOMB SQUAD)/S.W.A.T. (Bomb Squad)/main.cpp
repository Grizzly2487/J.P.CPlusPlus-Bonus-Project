#include <iostream>
#include "Game.h"
#include "Intro.h"
#include "Map.h"
#include "Player.h"

using namespace std;
Game bombSquad;
Intro welcome;
Game bomb;
int main()
{
	welcome.introduction();
	bombSquad.play();
	return 0;
}