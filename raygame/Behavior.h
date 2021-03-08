#pragma once

class Agent;

//Abstract class for all behaviors
class Behavior
{
public:
	virtual void update(Agent* agent, float deltatime) = 0;
	virtual void draw(Agent* agent) {};
};