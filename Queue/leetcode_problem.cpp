#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    MyQueue() {
        
    }
    deque<int>q;
    void push(int x) 
    {
        q.push_back(x);
        
    }
    
    int pop() 
    {
        int x=q.front();
        q.pop_front();
        return x;
        
    }
    
    int peek() 
    {
        return q.front();
        
    }
    
    bool empty() 
    {
        return q.empty();
        
    }
};

int main()
{
        MyQueue * myQueue = new MyQueue();
        MyQueue * myQueue1 = new MyQueue();
        myQueue->push(1);
        myQueue1->push(177); // queue is: [1]
        myQueue->push(2); // queue is: [1, 2] (leftmost is front of the queue)
        //myQueue.peek(); // return 1
        myQueue->pop(); // return 1, queue is [2]
         // return false
        cout<<myQueue1->peek();;
}