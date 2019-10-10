#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include "Map.h"
#include "Player.h"
using namespace std;
void Map::Move()
{
	location[0][0] = 1;
	location[0][1] = 2;
	location[0][2] = 3;
	location[1][0] = 4;
	location[1][1] = 5;
	location[1][2] = 6;

	currentLocation = 1;
	cout << bombLocation << endl << endl;
	cout << "Choose a location to move to by selecting a number:\n";
	cout << " 1.Front Hall, 2.West Office, 3.East Office, 4.Manager's Office, 5.Storage Closet, 6.Security Office\n";
	cin >> move;
	do
	{
		switch (move)
		{
		case 1:
			system("CLS");
			cout << "\n\n\n";
			cout << "You Moved To the Front Hall\n\n";
			currentLocation = 1;
			++turnsTaken;
			break;
		case 2:
			system("CLS");
			cout << "\n\n\n";
			cout << "You Moved To the West Office\n\n";
			currentLocation = 2;
			++turnsTaken;
			break;
		case 3:
			system("CLS");
			cout << "\n\n\n";
			cout << "You Moved To the East Office\n\n";
			currentLocation = 3;
			++turnsTaken;
			break;
		case 4:
			system("CLS");
			cout << "\n\n\n";
			cout << "You Moved To the Manager's Office\n\n";
			currentLocation = 4;
			++turnsTaken;
			break;
		case 5:
			system("CLS");
			cout << "\n\n\n";
			cout << "You Moved To the Storage Closet\n\n";
			currentLocation = 5;
			++turnsTaken;
			break;
		case 6:
			system("CLS");
			cout << "\n\n\n";
			cout << "You Moved To the Security Office\n\n";
			currentLocation = 6;
			++turnsTaken;
			break;
		default:
			system("CLS");
			cout << "\n\n\n";
			cout << "That is not a valid option, hurry up! the bomb is still counting down!";
			++turnsTaken;
		}
	} while (move != 1 && move != 2 && move != 3 && move != 4 && move != 5 && move != 6);
}

void Map::Look()
{
	locationDescriptions[0][0] = "The Front Hall has been evacuated. Just Like the rest of the building\n";
	locationDescriptions[0][1] = "The West Offices. Cubicles line the walls.\n";
	locationDescriptions[0][2] = "The East Offices. A giant conference table is in the middle with a projector screen on the far wall.\n";
	locationDescriptions[1][0] = "The Storage Closet. A broom and a mop can be seen.\n";
	locationDescriptions[1][1] = "The Manager's Office. A big desk with a computer and a file cabinet in the corner of the room.\n";
	locationDescriptions[1][2] = "The Security Office. Monitors for the cameras of the building can be seen.\n";

	std::vector<int> possibleNumbers;
	possibleNumbers.push_back(1);
	possibleNumbers.push_back(2);
	possibleNumbers.push_back(3);
	possibleNumbers.push_back(4);
	possibleNumbers.push_back(5);
	possibleNumbers.push_back(6);
	possibleNumbers.push_back(7);
	possibleNumbers.push_back(8);
	possibleNumbers.push_back(9);
	possibleNumbers.push_back(10);

	for (int i = 0; i < 4; ++i)
	{
		srand(static_cast<unsigned int>(time(0)));
		random_shuffle(possibleNumbers.begin(), possibleNumbers.end());
	}

	int firstClue = possibleNumbers[0];
	int secondClue = possibleNumbers[1];
	int thirdClue = possibleNumbers[2];
	int fourthClue = possibleNumbers[3];

	bombCode = firstClue, secondClue, thirdClue, fourthClue;

	srand(static_cast<unsigned int>(time(0)));
	int x1 = rand() % NUM_ROWS;
	int y1 = rand() % NUM_COLUMNS;
	int x2 = rand() % NUM_ROWS;
	int y2 = rand() % NUM_COLUMNS;
	int x3 = rand() % NUM_ROWS;
	int y3 = rand() % NUM_COLUMNS;
	int x4 = rand() % NUM_ROWS;
	int y4 = rand() % NUM_COLUMNS;
	int x5 = rand() % NUM_ROWS;
	int y5 = rand() % NUM_COLUMNS;

	bombLocation == location[x1][y1];

	if (bombLocation == location[0][0])
	{
		hasBomb1 == true;
	}
	else
	{
		hasBomb1 == false;
	}
	if (bombLocation == location[0][1])
	{
		hasBomb2 == true;
	}
	else
	{
		hasBomb2 == false;
	}
	if (bombLocation == location[0][2])
	{
		hasBomb3 == true;
	}
	else
	{
		hasBomb3 == false;
	}
	if (bombLocation == location[1][0])
	{
		hasBomb4 == true;
	}
	else
	{
		hasBomb4 == false;
	}
	if (bombLocation == location[1][1])
	{
		hasBomb5 == true;
	}
	else
	{
		hasBomb5 == false;
	}
	if (bombLocation == location[1][2])
	{
		hasBomb6 == true;
	}
	else
	{
		hasBomb6 == false;
	}
	firstClueLocation == location[x2][y2];

	secondClueLocation == location[x3][y3];

	thirdClueLocation == location[x4][y4];

	fourthClueLocation == location[x5][y5];

	if (location[x2][y2] == location[0][0])
	{
		hasClue1 = true;
	}
	else if (location[x2][y2] == location[0][1])
	{
		hasClue1 = true;
	}
	else if (location[x2][y2] == location[0][2])
	{
		hasClue1 = true;
	}
	else if (location[x2][y2] == location[1][0])
	{
		hasClue1 = true;
	}
	else if (location[x2][y2] == location[1][1])
	{
		hasClue1 = true;
	}
	else if (location[x2][y2] == location[1][2])
	{
		hasClue1 = true;
	}

	if (location[x3][y3] == location[0][0])
	{
		hasClue2 = true;
	}
	else if (location[x3][y3] == location[0][1])
	{
		hasClue2 = true;
	}
	else if (location[x3][y3] == location[0][2])
	{
		hasClue2 = true;
	}
	else if (location[x3][y3] == location[1][0])
	{
		hasClue2 = true;
	}
	else if (location[x3][y3] == location[1][1])
	{
		hasClue2 = true;
	}
	else if (location[x3][y3] == location[1][2])
	{
		hasClue2 = true;
	}

	if (location[x4][y4] == location[0][0])
	{
		hasClue3 = true;
	}
	else if (location[x4][y4] == location[0][1])
	{
		hasClue3 = true;
	}
	else if (location[x4][y4] == location[0][2])
	{
		hasClue3 = true;
	}
	else if (location[x4][y4] == location[1][0])
	{
		hasClue3 = true;
	}
	else if (location[x4][y4] == location[1][1])
	{
		hasClue3 = true;
	}
	else if (location[x4][y4] == location[1][2])
	{
		hasClue3 = true;
	}

	if (location[x5][y5] == location[0][0])
	{
		hasClue4 = true;
	}
	else if (location[x5][y5] == location[0][1])
	{
		hasClue4 = true;
	}
	else if (location[x5][y5] == location[0][2])
	{
		hasClue4 = true;
	}
	else if (location[x5][y5] == location[1][0])
	{
		hasClue4 = true;
	}
	else if (location[x5][y5] == location[1][1])
	{
		hasClue4 = true;
	}
	else if (location[x5][y5] == location[1][2])
	{
		hasClue4 = true;
	}

	Player inventory;

	if (currentLocation == 1)
	{
		cout << locationDescriptions[0][0];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;
			inventory.playerInventory[0] = firstClue;
		}
		else if(hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;
			inventory.playerInventory[1] = secondClue;

		}
		else if(hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;
			inventory.playerInventory[2] = thirdClue;
		}
		else if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;
			inventory.playerInventory[3] = fourthClue;
		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb1 = true)
		{
				cout << "The Bomb Is In This Room!\n";
				cout << "Would you like to enter the code? (Y/N)\n";
				cin >> enter;
				do
				{
					if (enter == 'Y' && enter != 'N')
					{
						if (inventory.playerInventory[0] = firstClue)
						{
							enterCode1 == firstClue;
						}
						else
						{
							cin >> enterCode1;
						}
						if (enterCode1 == firstClue)
						{
							cout << "First code approved. Enter the next code. \n";
							if (inventory.playerInventory[2] = secondClue)
							{
								enterCode2 == secondClue;
							}
							else
							{
								cin >> enterCode2;
							}
							if (enterCode2 == secondClue)
							{
								cout << "Second code approved. Enter the next code. \n";
								if (inventory.playerInventory[2] = thirdClue)
								{
									enterCode3 == thirdClue;
								}
								else
								{
									cin >> enterCode3;
								}
								if (enterCode3 == thirdClue)
								{
									cout << "Third code approved. Enter the next code. \n";
									if (inventory.playerInventory[3] = fourthClue)
									{
										enterCode4 == fourthClue;
									}
									else
									{
										cin >> enterCode4;
									}
									if (enterCode4 == fourthClue)
									{
										cout << "Bomb Defused. You Did It! Breathe it in, you saved the city!\n";
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
									}
									else
									{
										cout << "Wrong Code...\n";
										bombFuse = true;
										if (bombFuse == true)
										{
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
										}
									}
								}
								else
								{
									cout << "Wrong Code...\n";
									bombFuse = true;
									if (bombFuse == true)
									{
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
									}
								}
							}
							else
							{
								cout << "Wrong Code...\n";
								bombFuse = true;
								if (bombFuse == true)
								{
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
								}
							}
						}
						else
						{
							cout << "Wrong Code...\n";
							bombFuse = true;
							if (bombFuse == true)
							{
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
							}
						}
					}
					else
					{
						cout << "That is not a valid option.";
						cout << "Would you like to enter the code? (Y/N)\n";
						cin >> enter;
					}
				} while (enter == 'Y' && enter != 'N');
		}
		else
		{
			++turnsTaken;
		}
	}
	else if (currentLocation == 2)
	{
		cout << locationDescriptions[0][1];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;
			inventory.playerInventory[0] = firstClue;
		}
		else if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;
			inventory.playerInventory[1] = secondClue;

		}
		else if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;
			inventory.playerInventory[2] = thirdClue;
		}
		else if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;
			inventory.playerInventory[3] = fourthClue;
		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb2 == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y' && enter != 'N')
				{
					if (inventory.playerInventory[0] = firstClue)
					{
						enterCode1 == firstClue;
					}
					else
					{
						cin >> enterCode1;
					}
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						if (inventory.playerInventory[2] = secondClue)
						{
							enterCode2 == secondClue;
						}
						else
						{
							cin >> enterCode2;
						}
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							if (inventory.playerInventory[2] = thirdClue)
							{
								enterCode3 == thirdClue;
							}
							else
							{
								cin >> enterCode3;
							}
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								if (inventory.playerInventory[3] = fourthClue)
								{
									enterCode4 == fourthClue;
								}
								else
								{
									cin >> enterCode4;
								}
								if (enterCode4 == fourthClue)
								{
									cout << "Bomb Defused. You Did It! Breathe it in, you saved the city!\n";
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
								}
								else
								{
									cout << "Wrong Code...\n";
									bombFuse = true;
									if (bombFuse == true)
									{
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
									}
								}
							}
							else
							{
								cout << "Wrong Code...\n";
								bombFuse = true;
								if (bombFuse == true)
								{
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
								}
							}
						}
						else
						{
							cout << "Wrong Code...\n";
							bombFuse = true;
							if (bombFuse == true)
							{
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
							}
						}
					}
					else
					{
						cout << "Wrong Code...\n";
						bombFuse = true;
						if (bombFuse == true)
						{
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
						}
					}
				}
				else
				{
					cout << "That is not a valid option.";
					cout << "Would you like to enter the code? (Y/N)\n";
					cin >> enter;
				}
			} while (enter == 'Y' && enter != 'N');
		}
		else
		{
			++turnsTaken;
		}
	}
	else if (currentLocation == 3)
	{
		cout << locationDescriptions[0][2];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;
			inventory.playerInventory[0] = firstClue;
		}
		else if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;
			inventory.playerInventory[1] = secondClue;

		}
		else if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;
			inventory.playerInventory[2] = thirdClue;
		}
		else if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;
			inventory.playerInventory[3] = fourthClue;
		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb3 == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y' && enter != 'N')
				{
					if (inventory.playerInventory[0] = firstClue)
					{
						enterCode1 == firstClue;
					}
					else
					{
						cin >> enterCode1;
					}
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						if (inventory.playerInventory[2] = secondClue)
						{
							enterCode2 == secondClue;
						}
						else
						{
							cin >> enterCode2;
						}
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							if (inventory.playerInventory[2] = thirdClue)
							{
								enterCode3 == thirdClue;
							}
							else
							{
								cin >> enterCode3;
							}
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								if (inventory.playerInventory[3] = fourthClue)
								{
									enterCode4 == fourthClue;
								}
								else
								{
									cin >> enterCode4;
								}
								if (enterCode4 == fourthClue)
								{
									cout << "Bomb Defused. You Did It! Breathe it in, you saved the city!\n";
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
								}
								else
								{
									cout << "Wrong Code...\n";
									bombFuse = true;
									if (bombFuse == true)
									{
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
									}
								}
							}
							else
							{
								cout << "Wrong Code...\n";
								bombFuse = true;
								if (bombFuse == true)
								{
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
								}
							}
						}
						else
						{
							cout << "Wrong Code...\n";
							bombFuse = true;
							if (bombFuse == true)
							{
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
							}
						}
					}
					else
					{
						cout << "Wrong Code...\n";
						bombFuse = true;
						if (bombFuse == true)
						{
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
						}
					}
				}
				else
				{
					cout << "That is not a valid option.";
					cout << "Would you like to enter the code? (Y/N)\n";
					cin >> enter;
				}
			} while (enter == 'Y' && enter != 'N');
		}
		else
		{
			++turnsTaken;
		}
	}
	else if (currentLocation == 4)
	{
		cout << locationDescriptions[1][0];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;
			inventory.playerInventory[0] = firstClue;
		}
		else if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;
			inventory.playerInventory[1] = secondClue;

		}
		else if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;
			inventory.playerInventory[2] = thirdClue;
		}
		else if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;
			inventory.playerInventory[3] = fourthClue;
		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb4 == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y' && enter != 'N')
				{
					if (inventory.playerInventory[0] = firstClue)
					{
						enterCode1 == firstClue;
					}
					else
					{
						cin >> enterCode1;
					}
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						if (inventory.playerInventory[2] = secondClue)
						{
							enterCode2 == secondClue;
						}
						else
						{
							cin >> enterCode2;
						}
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							if (inventory.playerInventory[2] = thirdClue)
							{
								enterCode3 == thirdClue;
							}
							else
							{
								cin >> enterCode3;
							}
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								if (inventory.playerInventory[3] = fourthClue)
								{
									enterCode4 == fourthClue;
								}
								else
								{
									cin >> enterCode4;
								}
								if (enterCode4 == fourthClue)
								{
									cout << "Bomb Defused. You Did It! Breathe it in, you saved the city!\n";
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
								}
								else
								{
									cout << "Wrong Code...\n";
									bombFuse = true;
									if (bombFuse == true)
									{
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
									}
								}
							}
							else
							{
								cout << "Wrong Code...\n";
								bombFuse = true;
								if (bombFuse == true)
								{
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
								}
							}
						}
						else
						{
							cout << "Wrong Code...\n";
							bombFuse = true;
							if (bombFuse == true)
							{
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
							}
						}
					}
					else
					{
						cout << "Wrong Code...\n";
						bombFuse = true;
						if (bombFuse == true)
						{
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
						}
					}
				}
				else
				{
					cout << "That is not a valid option.";
					cout << "Would you like to enter the code? (Y/N)\n";
					cin >> enter;
				}
			} while (enter == 'Y' && enter != 'N');
		}
		else
		{
			++turnsTaken;
		}
	}
	else if (currentLocation == 5)
	{
		cout << locationDescriptions[1][1];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;
			inventory.playerInventory[0] = firstClue;
		}
		else if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;
			inventory.playerInventory[1] = secondClue;

		}
		else if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;
			inventory.playerInventory[2] = thirdClue;
		}
		else if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;
			inventory.playerInventory[3] = fourthClue;
		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb5 == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y' && enter != 'N')
				{
					if (inventory.playerInventory[0] = firstClue)
					{
						enterCode1 == firstClue;
					}
					else
					{
						cin >> enterCode1;
					}
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						if (inventory.playerInventory[2] = secondClue)
						{
							enterCode2 == secondClue;
						}
						else
						{
							cin >> enterCode2;
						}
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							if (inventory.playerInventory[2] = thirdClue)
							{
								enterCode3 == thirdClue;
							}
							else
							{
								cin >> enterCode3;
							}
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								if (inventory.playerInventory[3] = thirdClue)
								{
									enterCode3 == fourthClue;
								}
								else
								{
									cin >> enterCode3;
								}
								if (enterCode4 == fourthClue)
								{
									cout << "Bomb Defused. You Did It! Breathe it in, you saved the city!\n";
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
								}
								else
								{
									cout << "Wrong Code...\n";
									bombFuse = true;
									if (bombFuse == true)
									{
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
									}
								}
							}
							else
							{
								cout << "Wrong Code...\n";
								bombFuse = true;
								if (bombFuse == true)
								{
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
								}
							}
						}
						else
						{
							cout << "Wrong Code...\n";
							bombFuse = true;
							if (bombFuse == true)
							{
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
							}
						}
					}
					else
					{
						cout << "Wrong Code...\n";
						bombFuse = true;
						if (bombFuse == true)
						{
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
						}
					}
				else
				{
					cout << "That is not a valid option.";
					cout << "Would you like to enter the code? (Y/N)\n";
					cin >> enter;
				}
			} while (enter == 'Y' || enter == 'y' && enter != 'N' || enter != 'n');
		}
		else
		{
			++turnsTaken;
		}
	}
	else
	{
		cout << locationDescriptions[1][2];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;
			inventory.playerInventory[0] = firstClue;
		}
		else if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;
			inventory.playerInventory[1] = secondClue;

		}
		else if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;
			inventory.playerInventory[2] = thirdClue;
		}
		else if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;
			inventory.playerInventory[3] = fourthClue;
		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb6 == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y' && enter != 'N')
				{
					if (inventory.playerInventory[0] = firstClue)
					{
						enterCode1 == firstClue;
					}
					else
					{
						cin >> enterCode1;
					}
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						if (inventory.playerInventory[2] = secondClue)
						{
							enterCode2 == secondClue;
						}
						else
						{
							cin >> enterCode2;
						}
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							if (inventory.playerInventory[2] = thirdClue)
							{
								enterCode3 == thirdClue;
							}
							else
							{
								cin >> enterCode3;
							}
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								if (inventory.playerInventory[3] = fourthClue)
								{
									enterCode4 == fourthClue;
								}
								else
								{
									cin >> enterCode4;
								}
								if (enterCode4 == fourthClue)
								{
									cout << "Bomb Defused. You Did It! Breathe it in, you saved the city!\n";
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
								}
								else
								{
									cout << "Wrong Code...\n";
									bombFuse = true;
									if (bombFuse == true)
									{
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
									}
								}
							}
							else
							{
								cout << "Wrong Code...\n";
								bombFuse = true;
								if (bombFuse == true)
								{
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
								}
							}
						}
						else
						{
							cout << "Wrong Code...\n";
							bombFuse = true;
							if (bombFuse == true)
							{
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
							}
						}
					}
					else
					{
						cout << "Wrong Code...\n";
						bombFuse = true;
						if (bombFuse == true)
						{
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
							
						}
					}
				else
				{
					cout << "That is not a valid option.";
					cout << "Would you like to enter the code? (Y/N)\n";
					cin >> enter;
				}
				} while (enter == 'Y' && enter != 'N');
			}
			else
			{
				++turnsTaken;
			}
		}
	}
}

