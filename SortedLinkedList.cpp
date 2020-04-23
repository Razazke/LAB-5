/***********************************************************
Name: Dylan English
Assignment: LAB 5
Purpose:
***********************************************************/

#include "SortedLinkedList.h"

template<typename ItemType>
int SortedLinkedList<ItemType>::getPosition(const ItemType &anEntry) const
{
    int iter = 1;
    Node* curPtr = headPtr->getNext();
    while(curPtr != nullptr)
    {
        if (anEntry == curPtr->getData())
        {
            return iter;
        }
                curPtr=curPtr->getNext();
                iter++;
    }
    return -1; // reach here when the entry is not in the list
}

template<typename ItemType>
SortedLinkedList<ItemType>::SortedLinkedList()
{
    headPtr->setNext(nullptr);
}

template<typename ItemType>
SortedLinkedList<ItemType>::~SortedLinkedList() {

}

template<typename ItemType>
bool SortedLinkedList<ItemType>::insertSorted(const ItemType & anEntry)
{
    if(headPtr->getNext() == nullptr)
    {
        Node* NewNode = new Node(anEntry);
        headPtr->setNext(NewNode);
    }
    else{

    }
    /** Inserts an entry into this sorted list in its proper order
        so that the list remains sorted.
     @pre  None.
     @post  newEntry is in the list, and the list is sorted.
     @param newEntry  The entry to insert into the sorted list. */

    return false;
}

template<typename ItemType>
bool SortedLinkedList<ItemType>::removeSorted(const ItemType & anEntry) {
    return false;
}

template<typename ItemType>
bool SortedLinkedList<ItemType>::isEmpty() const {
    return false;
}

template<typename ItemType>
int SortedLinkedList<ItemType>::getLength() const {
    return 0;
}

template<typename ItemType>
bool SortedLinkedList<ItemType>::remove(int position) {
    return false;
}

template<typename ItemType>
ItemType SortedLinkedList<ItemType>::getEntry(int position) const {
    return position;
}

template<typename ItemType>
void SortedLinkedList<ItemType>::clear() {

}
template class SortedLinkedList<int>;