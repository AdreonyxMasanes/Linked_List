#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "ListNode.h"
#include <iostream>
class LinkedList {
public:
  LinkedList();
  void NewHead(int value);
  void NewTail(int value);
  void NewAtIndex(int index, int value);

  void RemoveHead();
  void RemoveTail();
  void RemoveAtIndex(int index);

  ListNode* GetAtIndex(int index) const;

  void Print() const;

  int Size();
private:
  ListNode* m_head = nullptr;
  ListNode* m_tail = nullptr;
  int m_size = 0;
};
#endif // !LINKED_LIST_H
