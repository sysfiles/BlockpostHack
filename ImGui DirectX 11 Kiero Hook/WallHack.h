#pragma once
#include "Vector.h"

class WallHack
{
public:
	
	Vector2 GetPlayerPos(int i);
	void Render();
	bool teamcheck = false;
	int selectiedFigure = 0;
	float colorWh[4] = { 0.780f, 0.031f, 0.756f,1.0f };
	float colorWhS[4] = { 0.007f, 0.152f, 0.788f,1.0f };
	Vector2 line();

};
class WallHackNames
{
public:
	char Lenght[8];
	int xxx_pad;
	char Pname[32];
	char ANTICRASH[64];
};
