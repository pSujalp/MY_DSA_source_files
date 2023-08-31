#include<stdlib.h>
#include<stdio.h>

struct Node 
{
    int data;
    Node * next;

};

struct Queue
{
    Node * head=NULL;
    Node * tail=NULL;
    int size=0;
    void push(int d)
    {
        struct Node * new1= (Node*) malloc(sizeof(Node));
       new1->data = d;
        if(head==NULL)
        {
            head=new1;
            tail=new1;
            size++;
            return;
        }
        else
        {
            tail->next=new1;
            tail=new1;
            size++;
        }
    }
   int front()
   {
      if(head==NULL) return 0;
      return head->data;
   }
   void pop()
   {
     if(head==NULL) return;
     Node *temp=head;
     head=head->next;
     free(temp);
   }
   int size_of_queue()
   {
      return size;
   }
};

int main()
{
    Queue q;
    q.push(2);
    q.pop();
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    q.pop();
    q.push(6);
    q.pop();
    
    printf("\n\nfront element is %d",q.front());

}