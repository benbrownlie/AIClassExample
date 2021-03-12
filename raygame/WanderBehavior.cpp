#include "WanderBehavior.h"

WanderBehavior::WanderBehavior()
{
	m_target = nullptr;
	setForceScale(1);
}

WanderBehavior::WanderBehavior(float circleDistance, float circleRadius, float wanderForce)
{
	m_circleDistance = circleDistance;
	m_circleRadius = circleRadius;
	setForceScale(wanderForce);
}

MathLibrary::Vector2 WanderBehavior::calculateForce(Agent* agent)
{
	//Find the agents facing
	MathLibrary::Vector2 circleCenter = agent->getForward() * m_circleDistance;

	//Find the direction and set it to a (vector2) random point in the circle with a x(cos) and y(sin)
	MathLibrary::Vector2 ranDirection = MathLibrary::Vector2(cos(rand()), sin(rand()));

	//direction * circleRadius
	ranDirection = ranDirection * m_circleRadius;

	//Add the product of direction and circleRadius to the circle's center position
	circleCenter = circleCenter + ranDirection;
}

//MathLibrary::Vector2 WanderBehavior::setAngle(MathLibrary::Vector2 pos, int value)
//{
//	float x = rand() % (value * );
//	float y = ;
//}

void WanderBehavior::update(Agent* agent, float deltatime)
{
	if (agent)
		agent->addForce(calculateForce(agent));
}

void WanderBehavior::draw(Agent* agent)
{

}
