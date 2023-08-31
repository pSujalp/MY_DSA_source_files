#include<bits/stdc++.h>
using namespace std;

class Parent
{
    private:

    int z=5;

    protected:

    int x=z;

};

class child:public Parent
{
    public:

    int y=x;

};

int main()
{
    child obj;
    std::cout<<obj.y;
}