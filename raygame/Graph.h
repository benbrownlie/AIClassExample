#pragma once
#include "Actor.h"
#include <vector>
#include <deque>
class Node;

class Graph : public Actor
{
public:
	Graph(int width, int height, int nodeSize, int nodeSpacing);
	void draw() override;
	void update(float deltatime) override;
	bool isInList(std::deque<Node*> list, Node* node);

	void BFS(int startX, int startY, int goalX, int goalY);
	void dijkstrap(int startX, int startY, int goalX, int goalY);
	void aStar();
	Node* getNode(int xPos, int yPos);

private:
	void createGraph(int nodeSize, int nodeSpacing);

private:
	int m_height;
	int m_width;
	std::vector<Node*> m_nodes;
};

