#include<bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}
int repeatedCharacter(string s) 
    { 
        int min1=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    min1=min(min1,j);

                }
            }
        }
        return min1;
    }

int main()
{
    string str="aabb";
    vector<char>c;
    unordered_map<char,int>ump;

    for(int i=0;i<str.size();i++)
    {
        ump[str[i]]++;
    }
    for(int i=0;i<str.size();i++)
    {
        if(ump[str[i]]==1) c.push_back(str[i]);
    }
    cout<<c[0];


}