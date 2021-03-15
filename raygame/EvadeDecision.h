#pragma once
#include "ABdecision.h"
#include "ComplexEnemy.h"

class EvadeDecision : public ABdecision
{
public:
	using ABdecision::ABdecision;
	void makeDecision(Agent* agent, float deltatime);
};

