#include<stdlib.h>
#include<stdio.h>

int stack[1];
struct Stack
{
    
    int intial_size=1;
    int top=-1;;
    int size=0;;

    void push(int d)
    {
        size++;
        stack[++intial_size];
        stack[++top]=d;
    }
    int top_element()
    {
        if(top==-1)
        {
            printf("Stack Underflow\n");
            return -1;
        }
        return stack[top];
    }
    void pop()
    {
        if(top==-1) return;
        stack[top]=0;
        top--;
        size--;
        stack[intial_size--];
    }
    int size_of_stack()
    {
        return size;

    }
     
   
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    
    printf("Stack of top element - %d\n", s.top_element());
     printf("size of stack- %d\n", s.size_of_stack());

}