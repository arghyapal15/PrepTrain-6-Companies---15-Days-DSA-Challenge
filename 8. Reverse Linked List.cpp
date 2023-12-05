#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *p=NULL;
    LinkedListNode<int> *n=NULL;
    LinkedListNode<int> *t=head;
    while(t!=NULL){
        n=t->next;
        t->next=p;
        p=t;
        t=n;
    }
    return p;
}
