#include <iostream>
#include "LinkedList.h"
int main () {
  LinkedList<int> my_list;
  

  my_list.NewHead(2);
  my_list.NewHead(1);
  my_list.NewTail(3);
  my_list.NewTail(4);
  my_list.NewTail(6);
  my_list.NewAtIndex(4, 5);
  my_list.Print(); // 1 2 3 4 5 6

  my_list.RemoveHead(); // 2 3 4 5 6
  my_list.RemoveAtIndex(2); // 2 3 5 6
  my_list.RemoveTail(); // 2 3 5
  my_list.Print();

  return 0;
}