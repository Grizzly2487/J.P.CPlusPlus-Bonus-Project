#include <iostream>
#include "Map.h"
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

void locations()
{
	string location[6]
	{
		"Front Hall", "West Offices", "Manager's Office", "East Offices", "Storage Closet", "Security Office"
	};

}

void move()
{
	cout << "Where to? \n\n";
	int move;
	cin >> move;

	do
	{
		if (move == 1)
		{
			cout << "North\n";

		}
		else if (move == 2)
		{
			cout << "West\n";
		}
		else if (move == 3)
		{
			cout << "South\n";
		}
		else if (move == 4)
		{
			cout << "East\n";
		}
		else
		{
			cout << "Not a valid option\n";
		}
	} while (move != 1 || move != 2 || move != 3 || move != 4);
}


