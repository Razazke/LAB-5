/***********************************************************
Name: Dylan English
Assignment: LAB 5
Purpose:
***********************************************************/

#ifndef LAB5_NODE_H
#define LAB5_NODE_H


#include <string>
class Node
{
    char data;
    Node* nextNode;
public:
    Node();
    Node(const char&);
    Node(const char&, Node* nextNodePtr);
    Node* getNext();
    void setNext(Node*);
    char getData();
    void setData(char);


};



#endif //LAB2_NODE_H

