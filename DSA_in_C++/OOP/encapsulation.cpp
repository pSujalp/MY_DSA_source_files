#include<bits/stdc++.h>
using namespace std;

class Encap
{
    private:
    int x;
    public:
    int get(){
        return x;}
    
    void set(int a){x=a;}
    
};

class child: public Encap
{

};

int main()
{
    Encap obj;
   obj.set(7);
    cout<< obj.get();
     

   

    return 0;
}