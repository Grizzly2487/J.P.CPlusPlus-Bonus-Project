#include "Map.h"
#include "Bomb.h"
#include "Clues.h"
#include "Player.h"
#include <iostream>
#include <string>


using namespace std;
Map move();
int menu(int choice)
{
	do
	{
		cout << "1 - look\n";
		cout << "2 - take\n";
		cout << "3 - use\n";
		cout << "4 - move\n";
		cout << "5 - abort mission\n\n";

		cin >> choice;

		switch (choice)
		{
			case 1:

			case 2:

			case 3:

			case 4:
				cout << "where would you like to move to? \n\n";
				Map move();

			case 5:

			default:
				cout << "This is not a valid option, your on the clock! hurry up and choose 1 - 5\n\n";

		}
	} while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5);
	return choice;
}

int quit()
{
	return 0;
}