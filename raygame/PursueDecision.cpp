#include "PursueDecision.h"

void PursueDecision::makeDecisison(Agent* agent, float deltatime)
{
	ComplexEnemy* enemy = dynamic_cast<ComplexEnemy*>(agent);

	if (enemy)
	{
		enemy->getPursue()->setEnabled(true);
		enemy->getWander()->setEnabled(false);
		enemy->getEvade()->setEnabled(false);
	}
}
