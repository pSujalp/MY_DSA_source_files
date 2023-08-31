#include<iostream>
using namespace std;
#include<vector>


class Stack{
   vector<int>v;
   int nextIndex;
   

   public:
       
       /// return no of elements present in stack
       int size(){
          return v.size();
       }
       bool isEmpty(){
         /*if(nextIndex==0){
            return true;
         }else{
            return false;
         }*/
         return v.empty()==0;
       }
       void push(int ele){
          v.push_back(ele);

       }
       void pop(){
         v.pop_back();
       }
       int top(){
         
         return v.back();
       }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(6);
    s.pop();

    cout<<s.top();


}