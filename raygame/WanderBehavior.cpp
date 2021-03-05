#include "WanderBehavior.h"

WanderBehavior::WanderBehavior()
{
	m_target = nullptr;
	m_wanderForce = 1;
}

WanderBehavior::WanderBehavior(Agent* target, float wanderForce)
{
	m_target = target;
	m_wanderForce = wanderForce;
}

MathLibrary::Vector2 WanderBehavior::calculateForce(Agent* agent)
{
	//Find the direction to move in
	MathLibrary::Vector2 direction = MathLibrary::Vector2::normalize(m_target->getWorldPosition() - agent->getWorldPosition());
	//Scale the direction vector by the wanderForce
	MathLibrary::Vector2 desiredVelocity = direction * m_wanderForce;
	//Find the circle
	MathLibrary::Vector2 circleCenter = desiredVelocity;
	circleCenter = circleCenter.normalize(circleCenter);
}

void WanderBehavior::update(Agent* agent, float deltatime)
{
	if (agent)
		agent->addForce(calculateForce(agent));
}
