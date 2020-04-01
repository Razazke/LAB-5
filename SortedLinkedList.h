/***********************************************************
Name: Dylan English
Assignment: LAB 5
Purpose:
***********************************************************/

#ifndef LAB5_SORTEDLINKEDLISTG_H
#define LAB5_SORTEDLINKEDLISTG_H

#include "SortedListInterface.h"
#include "Node.h"
#include <memory>

template<class ItemType>
class SortedLinkedList : SortedListInterface<ItemType>
{
    int size;
    std::shared_ptr<Node> headPtr;

public:
    SortedLinkedList();
    ~SortedLinkedList();
    bool insertSorted(const ItemType&);
    bool removeSorted(const ItemType&);
    int getPosition(const ItemType&);
    bool isEmpty();
    int getLength();
    bool remove(int);
    ItemType getEntry(int);

};


#endif //LAB5_SORTEDLINKEDLISTG_H
