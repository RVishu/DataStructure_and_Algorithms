// dequeue= stack + queue
/*
- insertion and deltion from both the end 
- provides random access
- insertion of elements at end in O(1) time
*/

#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> dq={10,20,30};
    dq.push_front(5);// O(1)
    dq.push_back(50);// O(1)

    for(auto x:dq)
    cout<<x<<" ";
    cout<<dq.front()<<" "<<dq.back();
    return 0;
    // begin= return operator pointing to the first element
      // end = return operator pointing to the beyond last element.

}
int main()
{
    deque<int > dq={10,25,30,5,12};
    auto it=dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_front();// O(1)
    dq.pop_back();// O(1)
    cout<<dq.size();
    return 0;

    // random access of any element= O(1);
    // insert and erase = O(n)
}




  