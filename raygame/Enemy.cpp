#include "Enemy.h"
#include "Game.h"

Enemy::Enemy(float x, float y, float collisionRadius, const char* spriteFilePath, Actor* target, float health, float damage, float maxSpeed, float maxForce)
	: Character(x, y, collisionRadius, spriteFilePath, health, damage, maxSpeed, maxForce)
{
	setTarget(target);
}

void Enemy::update(float deltatime)
{

	/*Character::update(deltatime);
	if (getWorldPosition().x > Game::getScreenWidth() / 32)
		setWorldPostion(MathLibrary::Vector2(0, getWorldPosition().y));

	if (getWorldPosition().x < 0)
		setWorldPostion(MathLibrary::Vector2(Game::getScreenWidth() / 32, getWorldPosition().y));

	if (getWorldPosition().y > Game::getScreenHeight() / 32)
		setWorldPostion(MathLibrary::Vector2(0, getWorldPosition().y));

	if (getWorldPosition().y < 0)
		setWorldPostion(MathLibrary::Vector2(0, getWorldPosition().x, Game::getScreenHeight));*/


}
