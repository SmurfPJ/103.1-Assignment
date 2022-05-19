#pragma once
#include <string>

std::string player1 = "";
std::string player2 = "";

struct soccer
{
	int playNum = 0;
	float topSpeed = 0;
	enum position {Goal, Mid, Strike, Wing, Defend};
};

int positChose;