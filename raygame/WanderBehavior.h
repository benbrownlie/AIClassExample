#pragma once
#include "SteeringBehavior.h"
#include "Agent.h"
class WanderBehavior : public SteeringBehavior
{
public:
	WanderBehavior();
	WanderBehavior(Agent* target, float wanderForce = 1);

	MathLibrary::Vector2 calculateForce(Agent* agent) override;

	void update(Agent* agent, float deltatime) override;
	void draw(Agent* agent) override;
private:
	Actor* m_target;
	float m_wanderAngle;
};

