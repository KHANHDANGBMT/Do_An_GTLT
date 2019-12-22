#pragma once
#include"Book.h"
class Node
{
public:
	Node();
	~Node();

public:
	Book data;
	Node* next;
};

Node::Node()
{
}

Node::~Node()
{
}