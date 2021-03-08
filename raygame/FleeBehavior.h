#pragma once
#include "SteeringBehavior.h"
#include "Actor.h"

class FleeBehavior : public SteeringBehavior
{
public:
	FleeBehavior();
	FleeBehavior(Actor* target, float fleeForce = 1);

	Actor* getTarget() { return m_target; }
	void setTarget(Actor* target) { m_target = target; }

	MathLibrary::Vector2 calculateForce(Agent* agent) override;
	void update(Agent* agent, float deltatime) override;

private:
	Actor* m_target;
};

