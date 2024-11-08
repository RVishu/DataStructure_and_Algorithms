#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int > s;
    s.push(10);
    s.push(20);
    s.push(30); 
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}
// STACK == CONTAINER ADAPTER

 /*
 TIME COMPLEXICITY AND INTERNAL WORKING OF STACK

 push()  , pop(),  top(), size()  they take O(1) time.

 stack can be implemented on any underlying container that provides following operations
        // LIST , VECTOR , DEQUE

    back()
    size()
    empty()
    push_back()
    pop_back()
 
 
 */