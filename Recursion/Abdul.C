#include<stdio.h>

void fun1(int x)
{
    if(x==0) return;
    printf("%d ",x);
    fun1(x-1);
    
        
    
}

int main()
{
    fun1(3);
}