#include <algorithm>
#include <ctime>
#include <cctype>
#include <vector>
#include "Player.h"
#include <iostream>
#include <string>
#include "Game.h"
#include "Map.h"


using namespace std;

int Game::play()
{

	do
	{
		do
		{
			cout << "what would you like to do?\n\n";
			int choice;
			cout << "1 - Look\n";
			cout << "2 - Inventory Search\n";
			cout << "3 - Move\n";
			cout << "4 - Abort Mission\n\n";

			cin >> choice;

			switch (choice)
			{
			case 1:
				myMap.Look();
				break;
			case 2:
				inventory.inventorySearch();
				break;
			case 3:
				cout << "where would you like to move to? \n\n";
				myMap.Move();
				break;
			case 4:
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
			}
		} while (choice != 1 && choice != 2 && choice != 3);
	} while (myMap.turnsTaken != 14);
	return 0;
}


