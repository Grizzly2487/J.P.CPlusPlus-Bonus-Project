#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include "Map.h"

using namespace std;
void Map::Move()
{
	location[0][0] = 1;
	location[0][1] = 2;
	location[0][2] = 3;
	location[1][0] = 4;
	location[1][1] = 5;
	location[1][2] = 6;

	currentLocation == location[0][1];
	cout << "Choose a location to move to by selecting a number: 1.Front Hall, 2.West Office, 3.East Office, 4.Manager's Office, 5.Storage Closet, 6.Security Office\n\n";
	cin >> move;
	do
	{
		switch (move)
		{
		case 1:
			cout << "You Moved To the Front Hall\n\n";
			currentLocation == location[0][1];
			++turnsTaken;
			break;
		case 2:
			cout << "You Moved To the West Office\n\n";
			currentLocation == location[0][0];
			++turnsTaken;
			break;
		case 3:
			cout << "You Moved To the East Office\n\n";
			currentLocation == location[0][2];
			++turnsTaken;
			break;
		case 4:
			cout << "You Moved To the Manager's Office\n\n";
			currentLocation == location[1][1];
			++turnsTaken;
			break;
		case 5:
			cout << "You Moved To the Storage Closet\n\n";
			currentLocation == location[1][0];
			++turnsTaken;
			break;
		case 6:
			cout << "You Moved To the Security Office\n\n";
			currentLocation == location[1][2];
			++turnsTaken;
			break;
		default:
			cout << "That is not a valid option, hurry up! the bomb is still counting down!";
			++turnsTaken;
		}
	} while (move != 1 && move != 2 && move != 3 && move != 4 && move != 5 && move != 6);
}

void Map::Look()
{
	enter = toupper(enter);

	locationDescriptions[0][0] = "The West Offices. Cubicles line the walls.\n";
	locationDescriptions[0][1] = "The Front Hall has been evacuated. Just Like the rest of the building\n";
	locationDescriptions[0][2] = "The East Offices. A giant conference table is in the middle with a projector screen on the far wall.\n";
	locationDescriptions[1][0] = "The Storage Closet. A broom and a mop can be seen.";
	locationDescriptions[1][1] = "The Manager's Office. A big desk with a computer and a file cabinet in the corner of the room.\n";
	locationDescriptions[1][2] = "The Security Office. Monitors for the cameras of the building can be seen.\n";

	if (currentLocation == location[0][0])
	{
		cout << locationDescriptions[0][0];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb == true)
		{
				cout << "The Bomb Is In This Room!\n";
				cout << "Would you like to enter the code? (Y/N)\n";
				cin >> enter;
				do
				{
					if (enter == 'Y')
					{
						cin >> enterCode1;
						if (enterCode1 == firstClue)
						{
							cout << "First code approved. Enter the next code. \n";
							cin >> enterCode2;
							if (enterCode2 == secondClue)
							{
								cout << "Second code approved. Enter the next code. \n";
								cin >> enterCode3;
								if (enterCode3 == thirdClue)
								{
									cout << "Third code approved. Enter the next code. \n";
									cin >> enterCode4;
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
											break;
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
										break;
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
									break;
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
								break;
							}
						}
					}
					else if (enter == 'N')
					{
						break;
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
	else if (currentLocation == location[0][1])
	{
		cout << locationDescriptions[0][1];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y')
				{
					cin >> enterCode1;
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						cin >> enterCode2;
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							cin >> enterCode3;
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								cin >> enterCode4;
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
										break;
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
									break;
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
								break;
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
							break;
						}
					}
				}
				else if (enter == 'N')
				{
					break;
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
	else if (currentLocation = location[0][2])
	{
		cout << locationDescriptions[0][2];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y')
				{
					cin >> enterCode1;
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						cin >> enterCode2;
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							cin >> enterCode3;
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								cin >> enterCode4;
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
										break;
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
									break;
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
								break;
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
							break;
						}
					}
				}
				else if (enter == 'N')
				{
					break;
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
	else if (currentLocation = location[1][0])
	{
		cout << locationDescriptions[1][0];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y')
				{
					cin >> enterCode1;
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						cin >> enterCode2;
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							cin >> enterCode3;
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								cin >> enterCode4;
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
										break;
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
									break;
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
								break;
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
							break;
						}
					}
				}
				else if (enter == 'N')
				{
					break;
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
	else if (currentLocation == location[1][1])
	{
		cout << locationDescriptions[1][1];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y')
				{
					cin >> enterCode1;
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						cin >> enterCode2;
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							cin >> enterCode3;
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								cin >> enterCode4;
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
										break;
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
									break;
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
								break;
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
							break;
						}
					}
				}
				else if (enter == 'N')
				{
					break;
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
	else
	{
		cout << locationDescriptions[1][2];
		if (hasClue1 == true)
		{
			cout << "You found the first of 4 clues!" << firstClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue2 == true)
		{
			cout << "You found the second of 4 clues!" << secondClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue3 == true)
		{
			cout << "You found the third of 4 clues!" << thirdClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasClue4 == true)
		{
			cout << "You found the fourth of 4 clues!" << fourthClue << endl;

		}
		else
		{
			cout << "There are no clues here...\n";
		}
		if (hasBomb == true)
		{
			cout << "The Bomb Is In This Room!\n";
			cout << "Would you like to enter the code? (Y/N)\n";
			cin >> enter;
			do
			{
				if (enter == 'Y')
				{
					cin >> enterCode1;
					if (enterCode1 == firstClue)
					{
						cout << "First code approved. Enter the next code. \n";
						cin >> enterCode2;
						if (enterCode2 == secondClue)
						{
							cout << "Second code approved. Enter the next code. \n";
							cin >> enterCode3;
							if (enterCode3 == thirdClue)
							{
								cout << "Third code approved. Enter the next code. \n";
								cin >> enterCode4;
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
										break;
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
									break;
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
								break;
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
							break;
						}
					}
				}
				else if (enter == 'N')
				{
					break;
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

void Map::locationRandomizer()
{
		srand(static_cast<unsigned int>(time(0)));
		int x = rand() % NUM_ROWS;
		int y = rand() % NUM_COLUMNS;
}

void Map::code()
{
	vector<int> possibleNumbers;
	possibleNumbers.push_back(0);
	possibleNumbers.push_back(1);
	possibleNumbers.push_back(2);
	possibleNumbers.push_back(3);
	possibleNumbers.push_back(4);
	possibleNumbers.push_back(5);
	possibleNumbers.push_back(6);
	possibleNumbers.push_back(7);
	possibleNumbers.push_back(8);
	possibleNumbers.push_back(9);

	for (int i = 0; i < 4; ++i)
	{
		srand(static_cast<unsigned int>(time(0)));
		random_shuffle(possibleNumbers.begin(), possibleNumbers.end());
	}
	int firstClue = possibleNumbers[0];
	int secondClue = possibleNumbers[1];
	int thirdClue = possibleNumbers[2];
	int fourthClue = possibleNumbers[3];
}

void Map::bomb()
{
	bombCode = firstClue,secondClue,thirdClue,fourthClue;
	bombLocation = location[x][y];
	
	if (bombLocation == location[0][0])
	{
		bool hasBomb = true;
	}
	else if (bombLocation == location[0][1])
	{
		bool hasBomb = true;
	}
	else if (bombLocation == location[0][2])
	{
		bool hasBomb = true;
	}
	else if (bombLocation == location[1][0])
	{
		bool hasBomb = true;
	}
	else if (bombLocation == location[1][1])
	{
		bool hasBomb = true;
	}
	else if (bombLocation == location[1][2])
	{
		bool hasBomb = true;
	}
}

void Map::clueLocations()
{
	locationRandomizer();
	firstClueLocation = location[x][y];
	secondClueLocation = location[x][y];
	thirdClueLocation = location[x][y];
	fourthClueLocation = location[x][y];

	if (bombLocation == location[0][0])
	{
		bool hasClue = true;
	}
	else if (clueLocation == location[0][1])
	{
		bool hasClue = true;
	}
	else if (clueLocation == location[0][2])
	{
		bool hasClue = true;
	}
	else if (clueLocation == location[1][0])
	{
		bool hasClue = true;
	}
	else if (clueLocation == location[1][1])
	{
		bool hasClue = true;
	}
	else if (clueLocation == location[1][2])
	{
		bool hasClue = true;
	}
}