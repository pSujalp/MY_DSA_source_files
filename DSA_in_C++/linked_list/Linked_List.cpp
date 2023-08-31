#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int d;
    Node*next;
    Node(int data)
    {
        d=data;
        next=NULL;
    }

};

class Linked
{
    public:
    Node *head;
    Linked()
    {
        head=NULL;
    }
    void push(int d1)
    {
        Node * new1= new Node(d1);
        if(head==NULL)
        {
            head=new1;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new1;
    }
    int length()
    {
        Node*temp=head;
        int i=0;
        while(temp) { i++;temp=temp->next;}

        return i; 

    }
    void insert(int i,int d)
    {
        int t=0;
        Node *temp=head;
        while(t<i-1)
        {
            temp=temp->next;
            t++;
        }
        Node * new1= new Node(d);
        new1->next=temp->next;
        temp->next=new1;

    }
    void print()
    {
        Node*temp=head;
        while(temp!=0)
        {
            cout<<temp->d<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    int print_th(int i)
    {
        int t=0;
        Node*temp=head;
        while(t!=i)
        {
            temp=temp->next;
            t++;
        }
        return temp->d;
    }
    void deletion()
    {
        Node*temp=head;
        Node*prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }

        prev->next=NULL;
        free(temp);


    }
    void reverse()
    {
        Node*temp=head;
        Node*prev=NULL;
        while(temp!=NULL)
        {
            Node*n=temp->next;
            temp->next=prev;
            prev=temp;
            temp=n;
        }
        Node* head=prev;

    }

 


};