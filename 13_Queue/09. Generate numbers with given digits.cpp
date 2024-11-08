#include <bits/stdc++.h>
using namespace std;

// Concept = use number as string.

void printFirstN(int n)
{
    queue <string> q;   // here by mistake sir used queue<int> q

    q.push("5");
    q.push("6");
    for(int count=0;count<n;count++)
    {
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
}

// time complexicity = O(n)