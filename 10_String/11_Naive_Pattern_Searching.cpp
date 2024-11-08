#include <bits/stdc++.h>
using namespace std;

// O((n-m+1)*m) and O(1)
void patSearching(string &txt , string &pat)
{
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        if(pat[j]!=txt[i+j])
        break;
        if(j==m)
        cout<<i<<" ";
    }

}