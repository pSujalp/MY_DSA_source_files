#include <stdio.h>
#include<stdlib.h>

int main()
{
    int s1,s2;
    printf("Enter the size of the first array\n");
    scanf("%d",&s1);
    int * arr = (int*) malloc(sizeof(int)*s1);
    for(int i = 0; i <s1;i++)
    {
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }

    printf("Enter the size of the second array\n");
    scanf("%d", &s2);
    
    arr = (int*) realloc(arr,sizeof(int)*(s1+s2));

    for(int i=s1;i<s1+s2;i++)
    {
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }

    for(int i=0;i<s1+s2;i++)
    {
        printf("%d ",arr[i]);
    }




}