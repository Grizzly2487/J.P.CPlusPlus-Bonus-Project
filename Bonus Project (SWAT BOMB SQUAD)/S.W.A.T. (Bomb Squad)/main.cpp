#include <iostream>
#include "Game.h"
#include "Game.h"
#include "Intro.h"
#include "Map.h"
#include "Player.h"

using namespace std;

int main()
{
	Game bombSquad;
	Intro welcome;

	welcome.introduction();
	bombSquad.play();
}