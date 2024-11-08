/*
LONGEST COMMON SUBSEQUENCE 

1- WHAT IS SUB-SEQUENCE
    e.g-> "CAD" -> " ",C,A,D,CA,DA,CD,CDA   -> order must be same as in original order
    TOTAL NO. OF SUBSEQUENCE = 2^n ( where n is no. of elements in sentacne)

I/P: s1= "ABCDGH"
     S2="AEDGHR"
O/P: 3  (A,D,H)     

*/


#include <bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int m,int n)
{
    if(m==0 || n==0)
        return 0;

    if(s1[m-1]==s2[n-1])
        return 1+lcs(s1,s2,m-1,n-1);
    else
        max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));      
}

// since there are overlapping of Sub-Problems -> so we'll use DP

/*
we'll use here Memoization

    - here 2 dimentions are in array of memo bcz -> int m ,int n changes with Recursive Calls
    

*/


/*
int memo[m+1][n+1]={-1,-1,-1,..,-1}

int lcs(string s1,string s2,int m,int n)
{
    if(memo[m][n]!=-1)
        return memo[m][n]
    if(m==0 || n==0) {memo[m][n]=0;}
    else
    {
        if(s1[m-1]==s2[n-1])
            memo[m][n]=1+lcs(s1,s2,m-1,n-1)
        else
            memo[m][n]=max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
    }  
    return memp[m][n]  
}


time complecicty = theta(m*n)
*/