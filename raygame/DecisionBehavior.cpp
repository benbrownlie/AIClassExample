#include "DecisionBehavior.h"
#include "Decision.h"

void DecisionBehavior::update(Agent* agent, float deltatime)
{
	if (agent)
		m_root->makeDecision(agent, deltatime);
}
