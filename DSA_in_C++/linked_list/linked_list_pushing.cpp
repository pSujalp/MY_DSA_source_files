#include<bits/stdc++.h> 
using namespace std;

class Node
{
    public:
    int value;
    Node*next;

    Node(int data)
    {
        value=data;
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
    void insert(int value)
    {
        Node* new_node =new Node(value);
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
    void display()
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insertion_At_beginning(int d)
    {
        Node * new1= new Node(d);
        new1->next=head;
        head=new1;
    }
};

int main()
{
    linkedlist l;
    int n;
    std::cout<<"No. of data to be entered in Linked list:"<<endl;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    { 
         int x;
         std::cin>>x;
         l.insert(x);
    }

     l.display();
     l.insertion_At_beginning(56);
     l.display();


}
