#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
using namespace std;

namespace scorelib
{
	void addPlayerToScore(string name, int score);
	void removePlayerToScore(int pos);
	void getScoreList();
	int getScorePos(int pos);
	void clearScore();
}

#endif