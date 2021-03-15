#include "ComplexEnemy.h"
#include "Player.h"

void ComplexEnemy::start()
{
	Enemy::start();

	//Initialize behaviors
	m_wanderBehavior = getBehavior<WanderBehavior>();
	m_pursueBehavior = getBehavior<PursueBehavior>();
	m_evadeBehavior = getBehavior<EvadeBehavior>();

	//Set target to target given from base class
	setTarget(Enemy::getTarget());
}

void ComplexEnemy::setTarget(Actor* target)
{
	Enemy::setTarget(target);
	m_pursueBehavior->setTarget(target);
	m_evadeBehavior->setTarget(target);
}

void ComplexEnemy::onCollision(Actor* other)
{
	Enemy::onCollision(other);

	Player* player = dynamic_cast<Player*>(other);

	//If the actor is a player, damage it
	if (player)
	{
		player->takeDamage(getDamage());

		//If the player has died, set the target to be null
		if (player->getHealth() <= 0)
		{
			setTarget(nullptr);
		}
	}
}

bool ComplexEnemy::checkTargetInSight(float angle)
{
	return false;
}

bool ComplexEnemy::checkTargetInRange(float range)
{
	return false;
}
