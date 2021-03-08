#pragma once
#include "SteeringBehavior.h"
#include "Actor.h"

class SeekBehavior : public SteeringBehavior
{
public:
	SeekBehavior();
	SeekBehavior(Actor* target, float seekForce = 1);

	Actor* getTarget() { return m_target; }
	void setTarget(Actor* target) { m_target = target; }

	MathLibrary::Vector2 calculateForce(Agent* agent) override;
	void update(Agent* agent, float deltatime) override;
private:
	//The agent the behavior is seeking
	Actor* m_target;
};

