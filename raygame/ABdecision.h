#pragma once
#include "Decision.h"

///<summary>
///A decision that has two children attached to it
///</summary>
class ABdecision : public Decision
{
public:
	ABdecision(Decision* leftChild = nullptr, Decision* rightChild = nullptr);

	///<summary>
	///Checks the condition and transitions to a different decision based on the return value
	///</summary>
	virtual void makeDecision(Agent* agent, float deltatime) override;

	///<summary>
	///Checks if a certain condition has been met and returns the result
	///</summary>
	virtual bool checkCondition(Agent* agent, float deltatime) { return false; }

private:
	Decision* m_leftChild;
	Decision* m_rightChild;
};

