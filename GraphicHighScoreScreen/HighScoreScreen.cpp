#include <iostream>

#include "highscore.h"

using namespace scorelib;

int main()
{
	int playerScore = 5;
	string playerName = "Unknown";
	int aux = 0;
	for (int i = 10; i > 0; i--)  //INIT
	{
		addPlayerToScore("Unknown", i);
	}
	

	for (int i = 0; i < 10; i++)
	{
		cout << getScoreName(i) << " ----- " << getScorePos(i) << endl;
	} //Print


	return 0;

}