/***********************************************************
Name: Dylan English
Assignment: LAB 5
Purpose:
***********************************************************/
#include "Node.h"

Node::Node()
{
    data = 0;
    nextNode = nullptr;
}
Node::Node(const int& str)
{
    data = str;
    nextNode = nullptr;
}

Node::Node(const int& str, Node* nextNodePtr)
{
    data = str;
    nextNode = nextNodePtr;
}

Node* Node::getNext()
{
    return nextNode;
}
void Node::setNext(Node* nextNodePtr)
{
    this->nextNode = nextNodePtr;
}

void Node::setData(char str)
{
    data = str;
}

char Node::getData()
{
    return data;
}
