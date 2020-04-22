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
    int data;
    Node* nextNode;
public:
    Node();
    Node(const int&);
    Node(const int&, Node* nextNodePtr);
    Node* getNext();
    void setNext(Node*);
    char getData();
    void setData(char);


};



#endif //LAB2_NODE_H

