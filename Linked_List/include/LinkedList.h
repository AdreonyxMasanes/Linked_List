#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "ListNode.h"
#include <iostream>
template <typename T>
class LinkedList {
public:
  LinkedList() {
  };

  void NewHead(T value) {
    if (!m_head) {
      m_head = new ListNode<T>(value);
      m_tail = m_head;
    } else {
      ListNode<T>* temp = new ListNode<T>(value);
      m_head->SetPrev(temp);
      temp->SetNext(m_head);
      m_head = temp;
    }
    m_size++;
  };

  void NewTail(T value) {
    if (!m_head) {
      this->NewHead(value);
    } else {
      ListNode<T>* temp = new ListNode<T>(value);
      m_tail->SetNext(temp);
      temp->SetPrev(m_tail);
      m_tail = temp;
    }
    m_size++;
  };
  void NewAtIndex(int index, T value) {
    ListNode<T>* curr = m_head;
    ListNode<T>* temp = new ListNode<T>(value);
    for (int i = 0; i < index - 1; i++) {
      curr = curr->Next();
    }
    temp->SetNext(curr->Next());
    temp->SetPrev(curr);
    curr->SetNext(temp);
    temp->Next()->SetPrev(temp);
    m_size++;
  };

  void RemoveHead() {
    if (!(m_head == m_tail)) {
      m_head = m_head->Next();
      delete m_head->Prev();
      m_head->SetPrev(nullptr);
    } else {
      delete m_head;

      m_head = nullptr;
      m_tail = nullptr;
    }
    m_size--;
  };

  void RemoveTail() {
    if (!(m_head == m_tail)) {
      m_tail = m_tail->Prev();
      delete m_tail->Next();
      m_tail->SetNext(nullptr);
    } else {
      delete m_head;

      m_head = nullptr;
      m_tail = nullptr;
    }
    m_size--;
  };

  void RemoveAtIndex(int index) {
    ListNode<T>* curr = m_head;
    for (int i = 0; i < index; i++) {
      curr = curr->Next();
    }
    curr->Prev()->SetNext(curr->Next());
    curr->Next()->SetPrev(curr->Prev());
    delete curr;
    m_size--;
  };

  ListNode<T>* GetAtIndex(int index) const {
    ListNode<T>* curr = m_head;
    for (int i = 0; i < index; i++) {
      curr = curr->Next();
    }
    return curr;
  };

  void Print() const {
    ListNode<T>* curr = m_head;
    while (curr != nullptr) {
      std::cout << curr->Value() << std::endl;
      curr = curr->Next();
    }
    std::cout << std::endl;
  };

  int Size() {
    return m_size;
  };
private:
  ListNode<T>* m_head = nullptr;
  ListNode<T>* m_tail = nullptr;
  int m_size = 0;
};
#endif // !LINKED_LIST_H
