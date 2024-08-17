#ifndef LIST_NODE_H
#define LIST_NODE_H
template<typename T>
class ListNode {
public:
  ListNode(T value) : m_value(value){
  }

  ListNode<T>* Next() const {
    return m_next;
  }

  ListNode<T>* Prev() const {
    return m_prev;
  }

  T Value() const {
    return m_value;
  }
  
  void SetNext(ListNode<T>* next) {
    m_next = next;
  }

  void SetPrev(ListNode<T>* prev) {
    m_prev = prev;
  }

private:
  T m_value;
  ListNode<T>* m_next = nullptr;
  ListNode<T>* m_prev = nullptr;
};
#endif // !LINKED_LIST_H
