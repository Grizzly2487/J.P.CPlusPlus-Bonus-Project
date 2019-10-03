#pragma once
#include <string>
#include <iostream>

using namespace std;


class Map
{
public:
	string Move();
	string look();

private:
	string move = 0;
	string currentLocation = 0;
	bool hasBomb = false;
};
