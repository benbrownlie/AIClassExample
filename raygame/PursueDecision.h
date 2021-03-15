#pragma once
#include "ABdecision.h"
#include "ComplexEnemy.h"

class PursueDecision : public ABdecision
{
public:
	using ABdecision::ABdecision;
	void makeDecisison(Agent* agent, float deltatime);
};

