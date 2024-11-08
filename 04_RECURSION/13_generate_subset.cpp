#include <bits/stdc++.h>
using namespace std;

//Pseudo code fpr generating all subsets

void subsets(string s,string curr=" ",int i=0)
{
    if(i==s.length())
    {
        cout<<s<<endl;
        return;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}

// int main()
// {
//     string m,curry;
//     cin>>m;
//     int j=0;

//     cout<<subsets(m,curry,j)<<endl;
// }