/***********************************************************
Name: Dylan English
Assignment: LAB 5
Purpose:
***********************************************************/

#include "SortedLinkedList.h"

template<typename ItemType>
int SortedLinkedList<ItemType>::getPosition(const ItemType &anEntry) const {
    return 0;
}

template<typename ItemType>
SortedLinkedList<ItemType>::SortedLinkedList() {
}

template<typename ItemType>
SortedLinkedList<ItemType>::~SortedLinkedList() {

}

template<typename ItemType>
bool SortedLinkedList<ItemType>::insertSorted(const ItemType & anEntry) {
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