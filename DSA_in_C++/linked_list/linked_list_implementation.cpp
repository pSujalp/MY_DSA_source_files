#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int val;
    Node *next;

    Node(int data)
    {
        val=data;
        next=NULL;
    }
};

void insertion_at_k(Node *&head,int d,int pos)
{
    int i=0;
    Node * temp =head;
    while(pos-1!=i)
    {
    temp=temp->next;
    i++;
    }
    Node *nEw=new Node(d);
    
    nEw->next=temp->next;
    temp->next=nEw;
    
    
}
void updation_of_linked(Node *&head,int d,int pos)
{
    int i=0;
    Node * temp =head;
    while(pos-1!=i)
    {
    temp=temp->next;
    i++;
    }
    temp->val=d;
    
}

void printmnode(Node *&head)
{
    Node *temp=head;

    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void insertionat_begin(Node* &head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertion_at_end(Node *&head,int d)
{
    Node *temp1=new Node(d);
    Node *temp=head; 
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->next=NULL;

}
void deletion(Node *&head)
{
    Node *temp=head;
    head=head->next;
    free(temp);


}
void deletion_from_beginn(Node *&head)
{
    Node *temp=head;
    head=head->next;
    free(temp);
}

void deletion_of_respective_value(Node* &head,int value)
{
    int i=0; Node *temp=head;
    Node *prev=NULL;
    while(temp!=NULL)
    {
       
        if(temp->val==value)
        {
            prev->next=temp->next;
            free(temp);

        }
        prev=temp;
        temp=temp->next;   
    }
    

}
void deletion_from_middle_k(Node*&head,int pos)
{
    int i=0; Node *temp=head;
    Node *prev=NULL;
    while(pos-1!=i)
    {
         prev=temp;
         temp=temp->next;
         i++;
    }
    prev->next=temp->next;
    free(temp);


}

void delete_alternate(Node*head)
{
    Node*temp=head;
    Node*prev=NULL;
    int i=0;
    while(temp!=NULL)
    {
        if(i%2==0)
        {
             prev=temp;
             temp=temp->next;
             i++;
             continue;
        }
        else
        {
            prev->next=temp->next;
            free(temp);
            
        }
        i++;
        
        

    }

}
void deletion_from_end(Node *&head)
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
int main()

{
   

   
    
    
    Node * n=new Node(4);
     Node * n1=new Node(41);

     n->next=n1;
     Node *head=n;


    

   // insertion_at_k(head,11,1);
   // updation_of_linked(head,31,3);

   //deletion(n);
   //deletion_from_beginn(head);
  //deletion_from_end(head);
    //deletion_from_middle(head,3);

  // deletion_of_respective_value(head,3);

   //delete_alternate(head);

    

    printmnode(head);
     insertionat_begin(head,45);
     cout<<endl;
      printmnode(head);
     


    
}