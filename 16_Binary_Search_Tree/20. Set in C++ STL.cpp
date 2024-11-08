// set is used to store sorted data

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s; // for ascending order
    set<int,greater<int>> s2; // for descending order
    s.insert(10);
    s.insert(5);
    s.insert(20);

    for(int x:s)
    cout<<x<<" " ;// 5 10 20

    for(auto it=s.begin();it!=s.end();it++)
    cout<<(*it)<<" ";   // 20 10 5

    for(auto it=s.rbegin();it!=s.rend();it++)  //rbegin and rend
    cout<<(*it)<<" ";   // 5 10 20 

// if we insert DUBLICATE values then it will be EGNORED
    s.insert(10);
    s.insert(20);

    for(auto it=s.begin();it!=s.end();it++)
    cout<<(*it)<<" "; // 5 10 20


// find() functin
    auto it=s.find(10);
    if(it==s.end())
        cout<<"Not found \n";
    else 
        cout<<"Found\n"; 


while(it!=s.end())
    cout<<*it<<" "; // 10 20


//




// clear()  - it remove all the elemets from the set

    s.clear();
    cout<<s.size()<<" "; // 0
 
// count() and find() - use to check whether a element is present or not.


// erase() - this remove element or group of element from the set
auto it =s.find(7);
s.erase(it);  // it will erase 7


 // to erase a range 
 auto it = s.find(7);
s.erase(it,s.end());  // it will erase 7


// lower_bound() -- that no. or just greater than that no.
 
 auto it= s.lower_bound(6);
 if(it!=s.end())
 cout<<(*it)<<" ";
 else
    cout<<"given element is greater than the largest";

}    

/*
set is based on self balanced bianry search tree (RED BLACK TREE)

INTERNAL WORKING AND TIME COMPLEXITIES

begin , end , rbegin, rend, cbegin, cend ,size, empty --> O(1)
   

insert ,find, count, lower_bound , upper_bound , erase -> O(logn)

erase(it)- amortized O(1)

*/


struct test
{
    int x;
    bool operator<(const test &t) const
    {
        return (this->x< t.x); // for increasing order , for decreasing order , x>t.x
    }
};

// set for user defined
//type

int main()
{
    set<test> s;
    s.insert({5});
    s.insert({20});
    s.insert({10});

    for(test t:s)
        cout<<t.x<<" ";  // 5 10 20
        return 0;
}




/*

APPLICATION 
    - sorted stream of data
    -doubly ended priority queue

*/