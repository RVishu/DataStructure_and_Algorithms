#include <bits/stdc++.h>
using namespace std;
/*
substring means continuous character
subsequence need not to be continuous;
*/

// naive solution - to generate all subsequences of string - 2^n  ==> T.C = O(2^n *n)

//EFFICIENT SOLUTION
    //ITERATIVE - time(n+m) and O(1)
    bool isSubSeq(string &s1,string &s2,int n,int m)
    {
        int j=0;
        for(int i=0;i<n&&j<m;i++)
        {
            if(s1[i]==s2[j])
            j++;
        }
        return (j==m);
    }


    //RECURSIVE
    bool isSubSeqRec(const string &s1,const string &s2,int n,int m)
    {
        if(m==0)   // order is important
        return true;
        if(n==0)  // order is important
        return false;

        
        if(s1[n-1]==s2[m-1]) // we should compare from last bcz , it doesn't need to declare extra variable like length of string
        return isSubSeqRec(s1,s2,n-1,m-1);
        else
        return isSubSeqRec(s1,s2,n-1,m);
    }
