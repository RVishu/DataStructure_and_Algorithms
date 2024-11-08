//FIFO== first in first out;
#include <bits/stdc++.h>
// #include <iostream>
// #include <queue>
using namespace std;

/*
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;

    return 0;
}
*/

 //push == enqueue
 // pop == dequeue 


// how Queue is Traversal

 
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    while(q.empty()==false)
    {

    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    } 

   
}
/*
push()
pop()
front()
back()
empty()
size()

all above have O(1) time complexicity









TIME COMPLEXITIES AND INTERNAL WORKING

    QUEUE can be implemented on any underlying container 
    that provides the following functions

    empty()
    size()
    front()
    back()
    push_back()     in stack it is same push_back()
    pop_front()     in stack it is pop_back()

    list and deque are the container which provide thse in O(1) time
*/