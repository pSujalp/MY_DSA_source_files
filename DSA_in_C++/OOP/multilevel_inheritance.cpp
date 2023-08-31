#include<bits/stdc++.h>
using namespace std;

class Parent1
{
    public:
    Parent1()
    {
        cout<<"This is Parent1"<<endl;
    }

};

class Parent2
{
    public:
    Parent2()
    {
        cout<<"This is Parent2"<<endl;
    }

};

class Child:public Parent1,public Parent2
{
    public:

    Child()
    {
        cout<<"This is child class";
    }
};

int main()
{
    Child s;
}

 