#pragma once
#define NUM_COLUMNS 3
#define NUM_ROWS 2

class Player;

class Map
{
public:
	void Move();
	void Look();

	int turnsTaken = 0;
private:
	std::string locationDescriptions[NUM_COLUMNS][NUM_ROWS];
	int currentLocation = 1;
	int location[NUM_COLUMNS][NUM_ROWS];
	int move = 0;
	int x;
	int y;

	bool hasBomb1 = false;
	bool hasBomb2 = false;
	bool hasBomb3 = false;
	bool hasBomb4 = false;
	bool hasBomb5 = false;
	bool hasBomb6 = false;
	bool bombFuse = false;
	int bombCode;
	int bombLocation;

	bool hasClue1 = false;
	bool hasClue2 = false;
	bool hasClue3 = false;
	bool hasClue4 = false;


	int firstClue;
	int secondClue;
	int thirdClue;
	int fourthClue;
	int firstClueLocation;
	int secondClueLocation;
	int thirdClueLocation;
	int fourthClueLocation;
	int clueLocation;

	char enter = ' ';
	int enterCode1;
	int enterCode2;
	int enterCode3;
	int enterCode4;

};
