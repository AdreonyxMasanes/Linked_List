# Generic Linked List imlementation (WIP)
# How To Install
Use the cmake :D
# Things I have Learned
Although I have not learned all the modern practices of Templates I have used my basic understanding of them to create a generic Linked List. <br>
This is a WIP as I continue to learn about the best practices of templates. <br>
# The Fun Stuff
## ListNode
Like any Linked List I store the data as well as a ptr to the next node as well as the previous node all of which can be accesed with a get or set call.
## LinkedList
LinkedList::NewHead creates a new node and sets the head of the Linked List to the new node. It is important to check to see if there even is a head because if there is not you have to set the tail to the head as well otherwise you create a temporary node on the heap,
set the original heads previous node  to the temp, set the temp nodes next node to the original head and then set the head value to the temp. <br>
