
#include <iostream>

#include "highscore.h"

#include <nana/gui/wvl.hpp> 
#include <nana/gui/widgets/label.hpp>


using namespace scorelib;
using namespace nana;

int main()
{
	int playerScore = 5;
	string playerName = "Unknown    ";
	

	for (int i = 10; i > 0; i--)  //INIT
	{
		addPlayerToScore(playerName, i);
	}

	form fm;
	fm.caption("High Score Screen");
	label lab0a(fm, rectangle{ 100,0,100,50 }); label lab0b(fm, rectangle{ 175,0,100,50 });
	label lab1a(fm, rectangle{ 100,20,100,50 }); label lab1b(fm, rectangle{ 175,20,100,50 });
	label lab2a(fm, rectangle{ 100,40,100,50 }); label lab2b(fm, rectangle{ 175,40,100,50 });
	label lab3a(fm, rectangle{ 100,60,100,50 }); label lab3b(fm, rectangle{ 175,60,100,50 });
	label lab4a(fm, rectangle{ 100,80,100,50 }); label lab4b(fm, rectangle{ 175,80,100,50 });
	label lab5a(fm, rectangle{ 100,100,100,50 }); label lab5b(fm, rectangle{ 175,100,100,50 });
	label lab6a(fm, rectangle{ 100,120,100,50 }); label lab6b(fm, rectangle{ 175,120,100,50 });
	label lab7a(fm, rectangle{ 100,140,100,50 }); label lab7b(fm, rectangle{ 175,140,100,50 });
	label lab8a(fm, rectangle{ 100,160,100,50 }); label lab8b(fm, rectangle{ 175,160,100,50 });
	label lab9a(fm, rectangle{ 100,180,100,50 }); label lab9b(fm, rectangle{ 175,180,100,50 });
	
	lab0a.caption(getScoreName(0)); lab0b.caption("   " + to_string(getScorePos(0)));
	lab1a.caption(getScoreName(1)); lab1b.caption("   " + to_string(getScorePos(1)));
	lab2a.caption(getScoreName(2)); lab2b.caption("   " + to_string(getScorePos(2)));
	lab3a.caption(getScoreName(3)); lab3b.caption("   " + to_string(getScorePos(3)));
	lab4a.caption(getScoreName(4)); lab4b.caption("   " + to_string(getScorePos(4)));
	lab5a.caption(getScoreName(5)); lab5b.caption("   " + to_string(getScorePos(5)));
	lab6a.caption(getScoreName(6)); lab6b.caption("   " + to_string(getScorePos(6)));
	lab7a.caption(getScoreName(7)); lab7b.caption("   " + to_string(getScorePos(7)));
	lab8a.caption(getScoreName(8)); lab8b.caption("   " + to_string(getScorePos(8)));
	lab9a.caption(getScoreName(9)); lab9b.caption("   " + to_string(getScorePos(9)));

	fm.show();
	exec();

	return 0;
	

}