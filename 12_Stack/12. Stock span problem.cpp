 //span- consecutive smaller or equal on left of a number  
#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLUTION - O(n2)

void printspan(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int span=1;
        for(int j=i-1;j>=0 && arr[j]<=arr[i];j--)
        span ++;
        cout<<span<<" "<<endl;
    }
}

//Efficient Solution
/*
{60,10,20,40,35,30,50,70,65}

span= (Index of Current Element)-(Index of Closest Greater Element on Left Side)
*/


/*

void printspan(int arr[],int n)
{
stack s;
s.push(0);
print(1);


for(int i=1;i<n;i++)
{
while(s.empty()==false && arr[s.top()]<=arr[i])
{
    s.pop();
}

span= s.isempty()?i+1:i-s.top();

print(span);

s.push(i);
}



}

theta(n) and O(n)


*/