// you can access i'th item in constant time, 
// contanier which allow random access are ARRAY ,VECTOR ,DEQUE

// v.end()  --> it is vector last element

// this sort functioon define in "Algorithm librarry"   #include <algorithm>

//sort function can sort in increasing order by default;

//sort(arr,arr+n,greater<int >)  here greater given decreasing order.

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
/*
int main()
{
    int n=4;
    int arr[n]={10,20,5,7};
    sort(arr,arr+n);
    for(int x:arr)
    cout<<x<<" ";
    sort(arr,arr+n,greater<int>());  // always use greater<int>()
    cout<<endl;
    for(int x:arr)
    cout<<x<<" ";
}
*/

/*
int main()
{
    vector<int> v={5,7,20,10};
    sort(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v)
    cout<<x<<" ";
}
*/

// programme where we specify our own order

struct point
{
    int x,y;
};
bool myCmp(point p1,point p2)
{
    return (p1.x<p2.x);
}
int main()
{
    int n=3;
    point arr[n]={{3,10},{2,8},{5,4}};
    sort(arr,arr+n,myCmp);

    for(auto i:arr)
    cout<<i.x<<" "<<i.y<<endl;   
}

// time complexicity and workking of sort function;
/*
sort uses QUICK SORT    -->QUICK ,HEAP,INSERTION  it is hybrid of these three

worst & average case : O(nlogn)

*/


