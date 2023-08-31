#include<bits/stdc++.h>
using namespace std;

class Students
{public:
   int l,b;

    Students(int x,int y)
    {
      l=x;
      b=y;

    }
   Students(Students &r)
   {
     
   }
};

int main()
{
    Students s(5,4);
    cout<<s.l<<" "<<s.b;

    
    
    
}