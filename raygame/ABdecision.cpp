#include "ABdecision.h"

ABdecision::ABdecision(Decision* leftChild, Decision* rightChild)
{
	m_leftChild = leftChild;
	m_rightChild = rightChild;
}

void ABdecision::makeDecision(Agent* agent, float deltatime)
{
	//Call the checkCondition function for this decision
	if (checkCondition(agent, deltatime))
	{
		//If the function returns true and the left child isn't null
		//move to the left node
		if (m_leftChild)
			m_leftChild->makeDecision(agent, deltatime);
	}

	else
	{
		//If the function returns false and the right child isn't null
		//move to the left node
		if (m_rightChild)
			m_rightChild->makeDecision(agent, deltatime);
	}
}
