/***********************************************************
Name: Dylan English
Assignment: LAB 5
Purpose:
***********************************************************/

#include "SortedLinkedList.h"
template<class ItemType>
bool SortedLinkedList<ItemType>::insertSorted(const ItemType& anEntry)
{

}

template<class ItemType>
bool SortedLinkedList<ItemType>::removeSorted(const ItemType& anEntry)
{
    return false;
}

template<class ItemType>
int SortedLinkedList<ItemType>::getPosition(const ItemType& anEntry) {
    return 0;
}

template<class ItemType>
bool SortedLinkedList<ItemType>::isEmpty() {
    return size == 0;
}

template<class ItemType>
int SortedLinkedList<ItemType>::getLength() {
    return size;
}

template<class ItemType>
bool SortedLinkedList<ItemType>::remove(int position) {
    return false;
}

template<class ItemType>
ItemType SortedLinkedList<ItemType>::getEntry(int position) {
    return nullptr;
}

template<class ItemType>
SortedLinkedList<ItemType>::SortedLinkedList() {
 size = 0;
}

template<class ItemType>
SortedLinkedList<ItemType>::~SortedLinkedList() {

}
