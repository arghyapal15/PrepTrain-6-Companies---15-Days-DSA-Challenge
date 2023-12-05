#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* insert(Node<int>* head , int data){

   

 Node<int>* nw = new Node<int> (data);

 

   if(head == NULL){

       return nw;

   }

   

   Node<int>* cur = head;

 

   while(cur->next != NULL){

       cur = cur->next;

   }

 

   cur->next = nw;

   return head;

 

}

 

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)

{

    if(first== NULL){

        return second;

    }

    if(second== NULL){

        return first;

    }

 

    Node<int>* fp = first;

    Node<int>* sp = second;

    

    Node<int>* ans = NULL; 

 

    while(fp!= NULL && sp != NULL){

 

    if(fp->data < sp->data){

        ans = insert(ans , fp->data);

        fp=fp->next;

    } else {

        ans = insert(ans, sp->data);

        sp = sp->next;

    }

    }

 

// If there are remaining nodes in the first list, add them to ans

  while (fp != NULL) {

        ans = insert(ans, fp->data);

        fp = fp->next;

    }

 

    // If there are remaining nodes in the second list, add them to ans

    while (sp != NULL) {

        ans = insert(ans, sp->data);

        sp = sp->next;

    }

 

    return ans;

}
