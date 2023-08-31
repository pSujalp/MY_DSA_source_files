#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        data=d;
        next=NULL;
    }

};

class Linkedlist
{
    public:
    Node *head;
    Node *tail;
    Linkedlist()
    {
        head=NULL;
        tail=NULL;
    }
    void push(int d)
{

    Node *new1=new Node(d);
    if(head==NULL)
    {
        head=new1;
        tail=new1;
        return;
    }
    else
    {
        tail->next=new1;
        tail=new1;
    }



}
    void print1()
    {
        Node *temp=head;

        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        
    }
};

int main()
{
    Linkedlist l;

    l.push(1);
    l.push(2);
    l.push(3);
    l.push(7);

    l.print1();
}