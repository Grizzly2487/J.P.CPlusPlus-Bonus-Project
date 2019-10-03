#include "Map.h"
#include <iostream>
#include <string>
#include <vector>



using namespace std;

string Map::Move()
{
	vector<string> location;
	location.push_back("Front Hall");
	location.push_back("West Offices");
	location.push_back("East Offices");
	location.push_back("Manager's Office");

	cout << "Where to?(Back/Forward/Left/Right) \n\n";
	cin >> move;
	do
	{
		if (move == "FORWARD" && currentLocation != location[2] && currentLocation != location[1] && currentLocation != location[3])
		{
			currentLocation = location[3];
			cout << "You moved forward into the " << currentLocation << endl;

		}
		else if (move == "LEFT" && currentLocation != location[2] && currentLocation != location[1] && currentLocation != location[3])
		{
			currentLocation = location[1] ;
			cout << "you moved left into the " << currentLocation << endl;
		}
		else if (move == "BACK" && currentLocation != location[0])
		{
			currentLocation = location[0];
			cout << "you moved back into the " << currentLocation << endl;
		}
		else if (move == "RIGHT" && currentLocation != location[2] && currentLocation != location[1] && currentLocation != location[3])
		{
			currentLocation = location[2];
			cout << "you moved right into the " << currentLocation << endl;
		}
		else
		{
			cout << "Not a valid option\n";
		}
	} while (move != "FORWARD" && move != "BACK" && move != "RIGHT" && move != "LEFT");
	return Move();
}

string Map::look()
{
	vector<string> locationDescriptions;
	locationDescriptions.push_back("The Front Hall is dim lit, there are the west offices to your left, the east offices to your right, and the managers office in front of you.");
	locationDescriptions.push_back("There are cubicles with desks and computers in this room, the Front Hall is behind you with no other exit.");
	locationDescriptions.push_back("The Managers Desk and computer are in this room, the Front Hall is behind you with no other exit.");
	locationDescriptions.push_back("There is a projector and a conference table in this room, the Front Hall is behind you with no other exit.");

	if (currentLocation[0])
	{
		cout << locationDescriptions[0] << endl;
	}
	else if (currentLocation[1])
	{
		cout << locationDescriptions[1] << endl;
	}
	else if (currentLocation[2])
	{
		cout << locationDescriptions[2] << endl;
	}
	else
	{
		cout << locationDescriptions[3] << endl;
	}
	return look();
}
