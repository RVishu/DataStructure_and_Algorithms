#include <bits/stdc++.h>
using namespace std;

int getCount(int coins[],int n,int sum)
{
    if(sum==0) return 1;
    if(n==0) return 0;

    int res=getCount(coins,n-1,sum);
    if(coins[n-1]<=sum)
        res =res+getCount(coins,n,sum-coins[n-1]);

    return res;    
}

// dynamic Programming solution of this problem

/*
dp[sum+1][n+1] 
    dp[i][j] : No. of combinations get with sum i and coins from 1 to j
*/

int getcount(int coins[],int n,int sum)
{
    int dp[sum+1][n+1];
    for(int i=0;i<=n;i++){dp[0][i]=1;}
    for(int i=1;i<=n;i++){dp[i][0]=0;}

    for(int i=1;i<=sum;i++)
        for(int j=1;j<=n;j++)
        {

           
            dp[i][j]=dp[i][j-1];
        if (coins[j-1]<=i)
            dp[i][j]+=dp[i-coins[j-1]][j];           


        }
}

/*

QUES- Why we take dimensions as dp[sum+1][n+1]  but not as dp[n+1][sum+1]
bcz - for the given sum , you are not  going through all coins
    but for a sum you are going through all the coins 



theta(m*sum)= TC=SC


// WE CAN OPTIMIZE THIS SOLUTION space as theta(sum) --> Go through GFG articles
*/