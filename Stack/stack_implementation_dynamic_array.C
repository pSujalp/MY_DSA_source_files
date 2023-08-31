#include<stdlib.h>
#include<stdio.h>


struct Stack
{
    int *stack = (int *)malloc(sizeof(int));
    int intial_size=1;
    int top=-1;;
    int size=0;;

    void push(int d)
    {
        size++;
        *((stack)+ (++top))=d;
        stack=(int*)realloc(stack,sizeof(int)*++intial_size);
    }
    int top_element()
    {
        if(top==-1)
        {
            printf("Stack Underflow\n");
            return -1;
        }
        return *(stack+top);
    }
    void pop()
    {
        if(top==-1) return;
        *(stack+top)=0;
        top--;
        size--;
        stack=(int*)realloc(stack,sizeof(int)*(--intial_size));
        
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
    s.pop();
    s.push(54);
    s.pop();
    s.push(54);
    s.push(44);
    s.pop();
    s.pop();
    
    printf("Stack of top element - %d\n", s.top_element());
    printf("size of stack- %d\n", s.size_of_stack());

}