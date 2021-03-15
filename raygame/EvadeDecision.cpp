#include "EvadeDecision.h"

void EvadeDecision::makeDecision(Agent* agent, float deltatime)
{
	ComplexEnemy* enemy = dynamic_cast<ComplexEnemy*>(agent);

	if (enemy)
	{
		enemy->getPursue()->setEnabled(false);
		enemy->getWander()->setEnabled(false);
		enemy->getEvade()->setEnabled(true);
	}
}
