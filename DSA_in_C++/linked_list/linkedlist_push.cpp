#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

class linkedlist
{
    public:
    Node * head;
    Node * tail;
    linkedlist()
    {
        head=NULL;
        tail=NULL;
    }
    void push(int d)
    {
        Node * new1 =new Node(d);
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
        return;
    }
    void printlist()
    {
        Node * temp=head;
        for(;temp!=NULL;)
        {
            cout<<temp->data;
            cout<<"--->";
            temp=temp->next;
        }
        cout<<"-->NULL";
        return ;
    }

};

int main()
{
    linkedlist l;

    l.push(2);
    l.push(3);
    l.push(6);
    l.printlist();
}