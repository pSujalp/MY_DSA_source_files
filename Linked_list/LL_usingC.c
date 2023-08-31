#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    Node *next;

};

struct linkedlist
{
    Node * head=NULL;
    Node* tail=NULL;

    void push(int da)
    {
        Node *new1 =(Node*) malloc(sizeof(Node));
        new1->data = da;
        if(head==nullptr)
        {
            head=new1;
            tail=new1;
            return;
        }
        else{
            tail->next=new1;
            tail=new1;
        }
    }
    void insert_atbeginning(int d)
    {
        Node * new1 =(Node*) malloc(sizeof(Node));
        new1->data = d;
        new1->next=head;
        head=new1;
    }
    void insert_at_end(int d)
    {
        if(head==nullptr) return;
        Node * new1 =(Node*) malloc(sizeof(Node));
        new1->data = d;
        tail->next=new1;
        tail=new1;
    }
    void print()
    {
        Node *temp=head;
        printf("-----------------------------------------------------------------\n");
        while(temp!=nullptr)
        {
            
            printf("%d",temp->data);
          
            temp=temp->next;
            printf(" -->   ");
            
        }
        printf("NULL");
        printf("\n-----------------------------------------------------------------\n");
        
    }
    void delete_node(int key)
    {
        
        if(head->data==key)
        {
            Node * curr=head;
            head=head->next;
            free(curr);
        }
        {
            Node * temp =head;
            Node * prev=NULL;
            while(temp!=NULL)
            {
                
                if(temp->data==key)
                {
                    prev->next=temp->next;
                    free(temp);
                }
                prev=temp;
                temp=temp->next;

            }

        }
    }
    bool search_node(int key)
    {
        Node * temp =head;
        while(temp!=NULL)
        {
            if(temp->data==key) return true;
            temp=temp->next;
        }
        return false;
    }
    int length_of_ll()
    {
        Node * temp =head;
        int l=0;
        while(temp!=NULL)
        {
            l++;
            temp=temp->next;
        }
        return sizeof(head);
    }

    int middle_node()
    {

        Node * temp =head;
        int arr[length_of_ll()];
        int m=length_of_ll();
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            arr[i]=temp->data;
            temp=temp->next;
        }
        if(m%2!=0) return arr[m/2];

        return arr[m/2-1];

    }
     int n_th_node(int ind)
    {
       Node * temp =head;
       int pos=0;
        while(temp!=NULL)
        {
            if(pos==ind) return temp->data;
            temp=temp->next;
            pos++;
        }
        return -404;
    }
    void reverse_linked_list()
    {
        Node * temp =head;
        Node * prev=NULL;
        while(temp!=NULL)
        {
            Node * n= temp->next;
            temp->next=prev;
            prev=temp;
            temp=n;
        }
        head=prev;
    }

};

int main()
{
    linkedlist l;
    l.push(4);
    l.push(7);
    l.push(9);
    l.push(10);
    l.push(22);
    l.print();

    
    
}