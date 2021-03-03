#include "FleeBehavior.h"
#include "Agent.h"

FleeBehavior::FleeBehavior()
{
	m_target = nullptr;
	m_fleeForce = 1;
}

FleeBehavior::FleeBehavior(Actor* target, float fleeForce)
{
	m_target = target;
	m_fleeForce = fleeForce;
}

MathLibrary::Vector2 FleeBehavior::calculateForce(Agent* agent)
{
	//Find the direction to move in
	MathLibrary::Vector2 direction = MathLibrary::Vector2::normalize(agent->getWorldPosition() - m_target->getWorldPosition());
	//Scale the direction vector by the seekForce
	MathLibrary::Vector2 desiredVelocity = direction * m_fleeForce;
	//Subtract current velocity from desired velocity to find steering force
	MathLibrary::Vector2 steeringForce = desiredVelocity - agent->getVelocity();

	return steeringForce;
}

void FleeBehavior::update(Agent* agent, float deltatime)
{
	//If the agent isn't null, calculate a new force and apply it to the agent
	if (agent)
		agent->addForce(calculateForce(agent));
}
