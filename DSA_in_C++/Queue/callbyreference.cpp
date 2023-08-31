#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>&v)
{
    sort(v.begin(),v.end());
}

int main()
{
    vector<int>j={1000,3,7,23,12,56};

    bubble(j);

    for(int i=0;i<j.size();i++) cout<<j[i]<<" ";
}