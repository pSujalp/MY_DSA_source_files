#include<iostream>
using namespace std;

class sum
{
    public:

    void add(int x,int y)
    {
        std::cout<<x+y<<endl;
    }

    void add(int x,int y,int z)
    {
        std::cout<<x+y+z<<endl;
    }

};

int main()
{

    sum obj;
    obj.add(1,2 );

}