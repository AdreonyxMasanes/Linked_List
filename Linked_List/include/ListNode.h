#ifndef LIST_NODE_H
#define LIST_NODE_H
#include <memory>
class ListNode {
public:
  ListNode();
  ListNode(int val);

  ListNode* Next() const;
  ListNode* Prev() const;
  int Value() const;

  void SetNext(ListNode* next);
  void SetPrev(ListNode* next);

private:
  int m_value;
  ListNode* m_next = nullptr;
  ListNode* m_prev = nullptr;
};
#endif // !LINKED_LIST_H
