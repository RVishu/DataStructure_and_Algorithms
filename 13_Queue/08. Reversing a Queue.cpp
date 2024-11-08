#include <bits/stdc++.h>
using namespace std;

//iterative solution

void reverse(queue<int> q)  // &== reference
{
    stack<int> s;
    while(q.empty()==false)  // !q.empty()
    {
        s.push(q.front());  // here q.front==q.top()
        q.pop();
    }
    while(s.empty()==false)
    {
        q.push(s.top());
        s.pop();
    }
} 

// RECURSIVE SOLUTION

void reverse (queue<int> q)
{
    if(q.empty())
    return;

    
    int x=q.front();
    q.pop();
    reverse(q);
    q.push(x);
}