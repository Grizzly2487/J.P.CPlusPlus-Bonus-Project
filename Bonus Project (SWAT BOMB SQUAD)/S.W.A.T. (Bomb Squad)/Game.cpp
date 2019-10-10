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
//function that creates the game loop, exits when the player has taken to many turns or has won the game
int Game::play()
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
				//player can look into the room and gives them a description and if the bomb is in the room or any clues. If there are clues, they are put into the player inventory. Not fully working im sorry
			case 1:
				system("CLS");
				cout << "\n\n\n";
				myMap.Look();
				break;
				//player can see the clues they have gathered 
			case 2:
				system("CLS");
				cout << "\n\n\n";
				inventory.inventorySearch();
				cout << "\n";
				break;
				//player can move to another location in the building array of locations, sets the players current location to the new location
			case 3:
				system("CLS");
				cout << "\n\n\n";
				cout << "where would you like to move to? \n\n";
				myMap.Move();
				break;
				//player chooses to be a panzy and runs away, ending the game early
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
				//if the player puts in a wrong input
			default:
				cout << "This is not a valid option, your on the clock! hurry up and choose 1 - 5\n\n";
			}
	} while (myMap.turnsTaken != 14);
	//once the turns are maxed out, the game will ennd
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
}


