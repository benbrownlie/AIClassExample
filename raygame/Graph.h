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
	std::deque<Node*> findPath(Node* start, Node* end);
	void aStar();
	Node* getNode(int xPos, int yPos);
	float gScore;
private:
	void createGraph(int nodeSize, int nodeSpacing);

private:
	int m_height;
	int m_width;
	std::vector<Node*> m_nodes;
};

