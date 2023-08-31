#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node*next;
    Node(int d)
    {
        value=d;
        next=NULL;
    }

};

class linkedlist
{
    public:
    Node*head;
    linkedlist()
    {
        head=NULL;
    }
   
    void pushing(int z)
    {
         Node*new_node=new Node(z);
        if(head==NULL)
        {
            
            head=new_node;
            return;
          
        }
        
        Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;

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
    void display()
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL";

    }


};

int main()
{
    linkedlist l;
    l.pushing(4);
    l.pushing(7);
    l.pushing(9);
   
    l.display();
    
    l.deletion();

}