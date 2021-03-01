#pragma once
#include "SteeringBehavior.h"
class SeekBehavior : public SteeringBehavior
{
public:
	SeekBehavior() { m_target = nullptr; }
	SeekBehavior(Agent* target) { m_target = target; }

	Agent* getTarget() { return m_target; }
	void setTarget(Agent* target) { m_target = target; }

	MathLibrary::Vector2 calculateForce(Agent* agent) override;
	void update(Agent* owner, float deltatime) override;
private:
	//The agent the behavior is seeking
	Agent* m_target;
};

