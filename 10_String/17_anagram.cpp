#include <bits/stdc++.h>
using namespace std;

// NAIVE - O((n-m+1)*m)
int CHAR =256;
bool isPresent(string &txt,string &pat)
{
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++)
    {
        if(areAnagram(pat,txt,i))
        return true;

    }
    return false;
}

bool areAnagram(string &pat,string &txt,int i)
{
    int count[CHAR]={0};
    for(int j=0;j<txt.length();j++)
    {
        count[pat[i]]++;
        count[txt[i+j]]--;
    }
    for(int j=0;j<CHAR;j++)
    if(count[j]!=0)
        return false;
    return true;    
}