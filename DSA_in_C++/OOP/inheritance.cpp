#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"This is Parent class"<<endl;
    }
};

class child:public Parent
{
    public:
    child()
    {
        cout<<"This is child class"<<endl;
    }
};

class grandchild:public child
{
    public:
    grandchild()
    {
        cout<<"This is grandchild class";
    }
}; 



int main()
{
    grandchild s;
}

