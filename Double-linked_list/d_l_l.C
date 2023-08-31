#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node * next;
    int data;
    struct Node* prev;

};

struct D_linked_list
{
    Node * head=nullptr;
    Node * tail=nullptr;
    void push(int d)
    {
        Node * new1 = (Node *) malloc(sizeof(Node));
        new1->data = d;
        if(head==NULL)
        {
            new1->next=NULL;
            head = new1;
            tail = new1;
            return;
        }
        else
        {
            new1->prev= tail;
            tail->next = new1;
            tail= new1;
        }
    }
    void front_tranversal()
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
    void back_tranversal()
    {
        Node * temp=tail;
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->prev;
        }
        printf("NULL\n");
    }
    void insert_at_beginning(int d)
    {
        Node * new1 = (Node*) malloc(sizeof(Node));
        new1->data=d;
        if(head==NULL)
        {
            new1->next=nullptr;
            new1->prev=nullptr;
            head=new1;
            tail=new1;
        }
       else{ 
        head->prev=new1;
        new1->next=head;
        head=new1;
        }
    }
    void insert_at_end(int d)
    {
        Node * new1 = (Node*) malloc(sizeof(Node));
        new1->data=d;
        if(head==NULL)
        {
            new1->next=nullptr;
            new1->prev=nullptr;
            head=new1;
            tail=new1;
        }
        else
        {
            tail->next=new1;
            new1->prev=tail;
            tail=new1;
        }
    }
    bool search_Node(int d)
    {
        Node * temp1=head;
        Node * temp2=tail;
        while(temp1!=nullptr || temp2!=nullptr)
        {
            if(temp1->data==d) return true;
            if(temp2->data==d) return true;
            temp1=temp1->next;
            temp2=temp2->prev;
        }
        return false;
    }
    void delete_node(int key)
    {
        Node * temp=head;
        if(head==nullptr) return;
        if(head->data==key)
        {
            temp=head;
            head->next->prev=NULL;
            head=head->next;
            head->next=nullptr;
            free(temp);
        }
        else if(tail->data==key)
        {
            temp=tail;
            tail->prev->next=nullptr;
            tail=tail->prev;
            tail->next=nullptr;
            free(temp);
        }
        else
        {
            temp=head;
            Node * temp1=tail;
            while(temp!=NULL)
            {
                if(temp->data==key)
                {
                    Node * n= temp;
                    temp->prev->next=temp->next;
                    temp->next->prev=temp->prev;
                    temp->next=nullptr;
                    temp->prev=nullptr;
                    free(n);
                }
                if(temp1->data==key)
                {
                    Node * n= temp1;
                    temp1->prev->next=temp1->next;
                    temp1->next->prev=temp1->prev;
                    temp1->next=nullptr;
                    temp1->prev=nullptr;
                    free(n);

                }
                temp=temp->next;
                temp1=temp1->prev;
            }
        }


    }

};

int main()
{
    D_linked_list l;
    l.push(77);
    l.push(99);
    l.insert_at_end(991);
    l.push(77);
    l.push(87);
    l.insert_at_beginning(44);
    l.delete_node(77);
    l.front_tranversal();


}