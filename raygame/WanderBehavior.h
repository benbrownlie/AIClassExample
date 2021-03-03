#pragma once
#include "SteeringBehavior.h"
class WanderBehavior : public SteeringBehavior
{
public:
	WanderBehavior();

	void update(Agent* agent, float deltatime) override;

private:
	float wanderAngle;
	float wanderForce;
};

