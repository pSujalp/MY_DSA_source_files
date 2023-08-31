#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Stack
{
    Node * tail=nullptr;
    Node * prev=nullptr;
    void push(int d)
    {
        Node * new1 = (Node*) malloc(sizeof(Node));
        new1->data=d;
        if(tail==nullptr)
        {
            tail=new1;
            prev=new1;
        }
        else
        {
            prev=tail;
            tail->next=new1;
            tail=new1;
        }
    }
    int top()
    {
        if(tail==nullptr || prev==nullptr) return 0;
        else
        {
            return tail->data;
        }
        return 0;

    }
    void pop()
    {
        if(tail==nullptr || prev==nullptr) return;
        else
        {
            Node * temp=tail;
            prev->next=nullptr;
            tail=prev;
            free(temp);
        }
    }

};

int main()
{
    Stack s;
    s.pop();
    printf(" %d \n",s.top());
}