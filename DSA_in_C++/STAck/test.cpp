#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int>v={1,0,0,1,0,1};
    string s="";
     for(int i=0;i<v.size();i++)
        {
            s.push_back(v[i]+'0');
          
            

        }
        cout<<s;


}