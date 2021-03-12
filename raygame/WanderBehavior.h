#pragma once
#include "SteeringBehavior.h"
#include "Agent.h"
class WanderBehavior : public SteeringBehavior
{
public:
	WanderBehavior();
	WanderBehavior(float circleDistance = 1, float circleRadius = 1, float wanderForce = 1);

	MathLibrary::Vector2 calculateForce(Agent* agent) override;
	MathLibrary::Vector2 setAngle(MathLibrary::Vector2 point, int value);

	void update(Agent* agent, float deltatime) override;
	void draw(Agent* agent) override;
private:
	Actor* m_target;
	float m_wanderAngle;
	float m_circleDistance;
	float m_circleRadius;
};

