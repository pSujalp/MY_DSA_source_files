#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int intital_size=1;
    int * queue = (int*)malloc(sizeof(int));
    int size=0;
    int back=-1;
    int front=0;
    void push(int d)
    {
         if(size==0)
         {
            back=-1;
            front=0;
            free(queue);
            int * queue = (int*)malloc(sizeof(int));

         }
        *(queue+(++back))=d;
        queue=(int*) realloc(queue,sizeof(int)*(++intital_size));
        size++;
    }
    int size_of_queue()
    {

        return size;
    }
    int front_element()
    {
        if(size==0) return 0;

        return *(queue+front);
    }
    void pop()
    {
        if(size==0)
        {
            return;
        }
            size--;
            front+=1;
        
    }
};


int main()
{
    Queue q;
    q.push(200);
    q.pop();
    q.push(200);
    q.push(200);
    q.push(200);
    q.push(200);

  
   



    printf("Queue is size - %d\n", q.size_of_queue());
    printf("Queue is front - %d\n",q.front_element());
}