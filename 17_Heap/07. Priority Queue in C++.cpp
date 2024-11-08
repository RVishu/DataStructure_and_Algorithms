/*
A priority queue always implement using HEAP data structure -> 

    default priority queue that we created in C++ is MAX_HEAP

MAX_HEAP --> maximum value at the Top.


*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);                  // .push(value) -> to insert a value in priority_queue
    pq.push(15);
    pq.push(5);

    cout<<pq.size()<<" ";

    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;  // 3 15 15 10 5
}

// 02- How to create a priority queue so that minimum element is at the top

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);             
    pq.push(15);
    pq.push(5);

    cout<<pq.size()<<" "; //3 

    while(pq.empty()==false)
    {
        cout<<pq.top()<<" "; // 5 
        pq.pop();    // 5 10 15
    }
    return 0;
}

// we can implement a priority queue using an existing vector or array also

int main()
{
    int arr[]={10,5,15};
    priority_queue<int> pq(arr,arr+3); // for vector pq(v.begin(),v.end())
    // priority queue = buil_heap +make_heap is O(n)
     
     while(pq.empty()==false)
     {
        cout<<pq.top()<<" ";
        pq.pop();
     }

}

/*

push , pop -> O(logn)

empty ,size,top -> O(1)
*/


// 03- one more way to create MIN-Heap priority queue , if we don't want to remember the prev log syntax

int main()
{
    int arr[]={10,5,15};
    /*
    for(int i=0;i<n;i++)
    arr[i]=-arr[i];
    */

    priority_queue<int> pq(arr,arr+3); 
     
     while(pq.empty()==false)
     {
        cout<<pq.top()<<" ";  // here -pq.top()
        pq.pop();
     }

}

// 04- Our own user define structure

struct Person
{
    int age;
    float height;
    Person(int a,float h )
    {
        age=a;
        height=h;
    }
};

struct myComparision
{
    bool operator()(Person const &p1,Person const &p2)
    {
        p1.height<p2.height;
    }
};

int main()
{
    priority_queue<Person,vector<Person>,myComparision> pq;
}


// 05- Application of Priority Queue
/*
    - Dijkstra Algorithm
    -Prim Algorith
    -Huffman Algorith
    -Heap Sort
    - and any other place where heap is used

*/


