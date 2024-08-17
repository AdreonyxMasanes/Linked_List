#include "LinkedList.h"

LinkedList::LinkedList() {
}

void LinkedList::NewHead(int value) {
  if (!m_head) {
    m_head = new ListNode(value);
    m_tail = m_head;
  } else {
    ListNode* temp = new ListNode(value);
    m_head->SetPrev(temp);
    temp->SetNext(m_head);
    m_head = temp;
  }
  m_size++;
}

void LinkedList::NewTail(int value) {
  if (!m_head) {
    this->NewHead(value);
  } else {
    ListNode* temp = new ListNode(value);
    m_tail->SetNext(temp);
    temp->SetPrev(m_tail);
    m_tail = temp;
  }
  m_size++;
}
void LinkedList::NewAtIndex(int index, int value) {
  ListNode* curr = m_head;
  ListNode* temp = new ListNode(value);
  for (int i = 0; i < index - 1; i ++) {
    curr = curr->Next();
  }
  temp->SetNext(curr->Next());
  temp->SetPrev(curr);
  curr->SetNext(temp);
  temp->Next()->SetPrev(temp);
  m_size++;
}

void LinkedList::RemoveHead() {
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
}

void LinkedList::RemoveTail() {
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
}

void LinkedList::RemoveAtIndex(int index) {
  ListNode* curr = m_head;
  for (int i = 0; i < index; i ++) {
    curr = curr->Next();
  }
  curr->Prev()->SetNext(curr->Next());
  curr->Next()->SetPrev(curr->Prev());
  delete curr;
  m_size--;
}

ListNode* LinkedList::GetAtIndex(int index) const {
  ListNode* curr = m_head;
  for (int i = 0; i < index; i ++) {
    curr = curr->Next();
  }
  return curr;
}

void LinkedList::Print() const {
  ListNode* curr = m_head;
  while (curr != nullptr)   {
    std::cout << curr->Value() << std::endl;
    curr = curr->Next();
  }
  std::cout << std::endl;
}

int LinkedList::Size() {
  return m_size;
}
