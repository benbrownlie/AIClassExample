#include "SeekBehavior.h"
#include "Agent.h"

SeekBehavior::SeekBehavior()
{
	m_target = nullptr;
	setForceScale(1);
}

SeekBehavior::SeekBehavior(Actor* target, float seekForce)
{
	m_target = target;
	setForceScale(seekForce);
}

MathLibrary::Vector2 SeekBehavior::calculateForce(Agent* agent)
{
	//Find the direction to move in
	MathLibrary::Vector2 direction = MathLibrary::Vector2::normalize(m_target->getWorldPosition() - agent->getWorldPosition());
	//Scale the direction vector by the seekForce
	MathLibrary::Vector2 desiredVelocity = direction * getForceScale();
	//Subtract current velocity from desired velocity to find steering force
	MathLibrary::Vector2 steeringForce = desiredVelocity - agent->getVelocity();

	return steeringForce;
}

void SeekBehavior::update(Agent* agent, float deltatime)
{
	//If the agent isn't null, calculate a new force and apply it to the agent
	if (agent)
		agent->addForce(calculateForce(agent));
}
