#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node * next;
    Node(int d)
    {
        data=d;
        next=NULL;

    }
};

struct LinkedList
{
    Node * head;
    Node *tail;
    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    void push(int d)
    {
        Node * new1 =new Node(d);
        if(head==NULL && tail==NULL)
        {
            head=new1;
            tail=new1;
        }
        else
        {
            tail->next=new1;
            tail=new1;
        }
    }
    void print()
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"-->";
            temp=temp->next;
        }
        cout<<"NULL";
        return;
    }

}l;

int main()
{
    l.push(45);
    l.push(56);
    l.push(77);

    l.print();

}