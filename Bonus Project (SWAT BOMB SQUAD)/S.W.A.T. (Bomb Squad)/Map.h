#pragma once
#define NUM_COLUMNS 3
#define NUM_ROWS 2
#define NUM_COLUMNSB 3
#define NUM_ROWSB 2
class Player;

class Map
{
public:
	void Move();
	void Look();
	void locationRandomizer();
	void code();
	void bomb();
	void clueLocations();
	int turnsTaken = 0;
private:
	string locationDescriptions[NUM_COLUMNSB][NUM_ROWSB];
	int currentLocation = 0;
	int location[NUM_COLUMNS][NUM_ROWS];
	int move = 0;
	int x;
	int y;
	bool hasBomb = false;
	bool hasClue1 = false;
	bool hasClue2 = false;
	bool hasClue3 = false;
	bool hasClue4 = false;
	bool bombFuse = false;
	int bombCode = 0;
	int firstClue;
	int secondClue;
	int thirdClue;
	int fourthClue;
	int firstClueLocation;
	int secondClueLocation;
	int thirdClueLocation;
	int fourthClueLocation;
	int clueLocation;
	int bombLocation;
	char enter = ' ';
	int enterCode1;
	int enterCode2;
	int enterCode3;
	int enterCode4;
};
