#include "ListNode.h"

ListNode::ListNode() : m_value(0) {
}

ListNode::ListNode(int val) : m_value(val){
}

ListNode* ListNode::Next() const {
  return m_next;
}

ListNode* ListNode::Prev() const {
  return m_prev;
}

int ListNode::Value() const {
  return m_value;
}

void ListNode::SetNext(ListNode* next) {
  m_next = next;
}

void ListNode::SetPrev(ListNode* prev) {
  m_prev = prev;
}
