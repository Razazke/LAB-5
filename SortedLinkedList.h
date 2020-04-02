/***********************************************************
Name: Dylan English
Assignment: LAB 5
Purpose:
***********************************************************/

#ifndef LAB5_SORTEDLINKEDLIST_H
#define LAB5_SORTEDLINKEDLIST_H

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
    int getPosition(const ItemType&) const;
    bool isEmpty() const;
    int getLength() const;
    bool remove(int);
    ItemType getEntry(int) const;
    void clear();

};


#endif //LAB5_SORTEDLINKEDLISTG_H
