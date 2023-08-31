#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
   

    Node(int d)
    {
        data=d;
        next=NULL;
       
    }
};

class Queue
{
    public:
      
    Node*head;
    Node*tail;
    int size;

    Queue()
    {
    head=NULL;
    tail=NULL;
    size=0;

    }
  

    bool empty()
    {
        if(head==NULL) return true;

        return 0;
    }

    void push(int d)
    {
        Node* new1=new Node(d);
        if(head ==NULL && tail==NULL) 
        {
            size=0;
            head=new1;
            tail=new1;
            return;
        }
         else
         {
            tail->next=new1;
            tail=new1;
         }   
         tail->next=NULL;
      
    }
    int front()
    {
        if(head==NULL)
        {
            cout<<"It's already empty ";
             return -404;
        }
        return head->data;
    }
    void pop()
    {
        if(empty()==1) return;
        Node*temp=head;
        head=head->next;
        delete temp;
    }
    int sizeq()
    {
        return size;
    }


};

int main()
{
    Queue q;
   q.push(45);
   q.push(56);
   q.pop();

    Queue q1;

    q1.push(451);
    q1.push(4512);
    
    
   
    

    cout<<q.front();


}