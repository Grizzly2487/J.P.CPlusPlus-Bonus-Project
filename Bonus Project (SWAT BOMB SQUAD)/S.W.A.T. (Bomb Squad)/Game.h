#pragma once
class Map;

class Game
{
public:
	int play();
	void bombCode();
	void code();
	void bombLocation();
private:
	const int MAX_TURNS = 14;
	int turnsTaken = 0;
	int choice;
	bool bombFuse = false;
	static const int NUM_NUMBERS = 10;
};
