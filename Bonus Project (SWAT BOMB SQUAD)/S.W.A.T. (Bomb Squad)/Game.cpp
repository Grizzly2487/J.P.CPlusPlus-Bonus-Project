#include "Map.h"
#include <algorithm>
#include <ctime>
#include <cctype>
#include <vector>
#include "Player.h"
#include <iostream>
#include <string>
#include "Game.h"


using namespace std;

int Game::play()
{
	do
	{
		do
		{
			int choice;
			cout << "1 - look\n";
			cout << "2 - take\n";
			cout << "3 - use\n";
			cout << "4 - move\n";
			cout << "5 - abort mission\n\n";

			cin >> choice;

			switch (choice)
			{
			case 1:
				Map look();
				++turnsTaken;
				break;
			case 2:

			case 3:

			case 4:
				cout << "where would you like to move to? \n\n";
				Map Move();
				break;
			case 5:
				system("CLS");
				cout << "The Bomb Blows Up...we're all dead Jim....GAME OVER!\n";
				cout << " \n";
				cout << " \n";
				cout << "\tThank you for playing!\n\n";
				cout << "\tLook at my WISE WIZARD MUAHAHAHA\n\n";
				cout << "\t\t        /|     \n";
				cout << "\t\t       / \\    \n";
				cout << "\t\t      /   \\   \n";
				cout << "\t\t \\____\____/____|\n";
				cout << "\t\t   {|<*> <*>|} \n";
				cout << "\t\t    |  (-)  |   (&)\n";
				cout << "\t\t    /\\__1__/|   //\n";
				cout << "\t\t   | '8-8-8' | //\n";
				cout << "\t\t   |  '8-8'  | / \n";
				cout << "\t\t   |   '8'   | \n";
				cout << "\t\t   |    ?    | \n";
				cout << "\n";
				cout << "\n";
				cout << "\n";
				return 0;
			default:
				cout << "This is not a valid option, your on the clock! hurry up and choose 1 - 5\n\n";
				++turnsTaken;

			}
		} while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5);
	} while (turnsTaken != 14 && bombFuse != true);
	return 0;
}

void Game::bombLocation()
{
	//for (int i = 0; i < 5; ++i)
	//{
		//srand(static_cast<unsigned int>(time(0)));
		//rand()
	//}

};

void Game::bombCode()
{
	code();
};
void Game::code()
{
	vector<string> possibleNumbers;
	possibleNumbers.push_back("0");
	possibleNumbers.push_back("1");
	possibleNumbers.push_back("2");
	possibleNumbers.push_back("3");
	possibleNumbers.push_back("4");
	possibleNumbers.push_back("5");
	possibleNumbers.push_back("6");
	possibleNumbers.push_back("7");
	possibleNumbers.push_back("8");
	possibleNumbers.push_back("9");

	for (int i = 0; i < 4; ++i)
	{
		srand(static_cast<unsigned int>(time(0)));
		random_shuffle(possibleNumbers.begin(), possibleNumbers.end());
	}
	const string firstClue = possibleNumbers[0];
	const string secondClue = possibleNumbers[1];
	const string thirdClue = possibleNumbers[2];
	const string fourthClue = possibleNumbers[3];
}

