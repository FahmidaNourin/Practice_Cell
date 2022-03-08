#ifndef SORTEDLIST_H
#define SORTEDLIST_H

const int MAX_ITEMS = 10;

template <class ItemType>
class SortedList{

private:
ItemType info[MAX_ITEMS];
int length;
int currentPos;

public:
SortedList();
bool InsertItem(ItemType); // sorted
bool RetrieveItem(ItemType&); // sorted // optimize
bool DeleteItem(ItemType); // sorted
bool GetNextItem(ItemType&);
void ResetList();
bool IsFull();
int GetLength();
void MakeEmpty();
};

#include "SortedList.tpp"
#endif //SORTEDLIST_H
