/*
Write a program to insert an element and delete an element at specified positions in a array.
*/
//Date : 24-08-2023
//Roll.no -2248001 //Name : Sujal Padmadevarathnam
#include<stdio.h>
#include<stdlib.h>

struct Vector
{
    int * arr= (int*) malloc(sizeof(int));
    int intial_size=1;
    int size=0;
    int e=-1;
    int s=0;
    void push(int d)
    {
        if(size==0)
        {
            free(arr);
            intial_size=1;
            arr = (int*) realloc(arr,sizeof(int));
            e=-1;
            s=0;
        }
        *(arr+(++e))=d;
        ++size;
        arr = (int*) realloc(arr,sizeof(int)*(++intial_size));
        return;  
    }
    void print()
    {
        for(int i=s;i<size;i++)
        {
            printf("%d ", *(arr+i)); 
        }
        printf("\n");
    }
    void delete1(int i)
    {
        if(i>=0 && i<size)
        {
            for(int j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            *(arr+e)=0;
           arr = (int*) realloc(arr,sizeof(int)*(--intial_size));
           --e;
           size--;
        }
    }

    void insert(int i,int d)
    {
        if(i>=0 && i<size)
        {
            arr = (int*) realloc(arr,sizeof(int)*(++intial_size));
            for(int j=size-1;j>=i;j--)
            {
                arr[j+1]=arr[j];
            }
        }
        *(arr+i)=d;
        ++e;
        size++;
    }
    void merging_of_arr()
    {
        int f_size,s_size  ;
        printf("enter the size of  first array \n");
        scanf("%d",&f_size);
        int * arr1 = (int*) malloc(sizeof(int)*(f_size));
        printf("enter the elements of first array \n");

        for(int i=0;i<f_size;i++)
        {
            int x;
            scanf("%d",&x);
            arr1[i]=x;
        }

        printf("enter the size of second array \n");
        scanf("%d",&s_size);



        int total =f_size+s_size;

        arr1 = (int*) realloc(arr1,sizeof(int)*(f_size+s_size));


        printf("enter the elements of second array \n");

        for(int i=f_size;i<total;i++)
        {
            int x;
            scanf("%d",&x);
            arr1[i]=x;
        }

        for(int i=0;i<total;i++)
        {
            printf("%d ",arr1[i]);
        } 
    }
};

int main()
{
    Vector v;
    // int s,pos,val,pos1;
    // v.push(1);
    // v.push(4);
    // v.push(8);
    // printf("Before applying no operation in an array\n");
    // v.print();
    // v.delete1(1);
    // printf("After applying delete operation in an array\n");
    // v.print();
    // printf("After applying insert operation in an array\n");
    // v.insert(1,78);
    // v.print();

   // printf("Merging of two arrays\n");

   // v.merging_of_arr();




}