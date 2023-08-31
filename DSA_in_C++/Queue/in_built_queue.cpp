#include<bits/stdc++.h>
using namespace std;

 

 int main()
 {
    queue<int>q;

    q.push(45);
    q.push(56);
    int i=0;
    stack<int>st;
    queue<int>q1;

    while(!q.empty())
    {
       st.push(q.front());
       q.pop();
       i++;
    }
    int j=0;
    while(i!=j)
    {
        q1.push(st.top());
        st.pop();
        j++;
    }
    cout<<q1.front();
    
   
 }